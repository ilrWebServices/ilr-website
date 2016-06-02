<?php

/**
 * @file
 * Contains \Drupal\restful\RenderCache\Entity\CacheFragmentController.
 */

namespace Drupal\restful\RenderCache\Entity;

use Doctrine\Common\Collections\ArrayCollection;
use Drupal\restful\Plugin\resource\Decorators\CacheDecoratedResource;

class CacheFragmentController extends \EntityAPIController {

  /**
   * Creates all the caches tags from the tag collection.
   *
   * @param ArrayCollection $cache_fragments
   *   The collection of tags.
   *
   * @return CacheFragment[]
   *   An array of fragments.
   */
  public function createCacheFragments(ArrayCollection $cache_fragments) {
    $hash = $this->generateCacheHash($cache_fragments);
    if ($fragments = $this->existingFragments($hash)) {
      return $fragments;
    }
    foreach ($cache_fragments as $tag_type => $tag_value) {
      $cache_fragment = new CacheFragment(array(
        'value' => $tag_value,
        'type' => $tag_type,
        'hash' => $hash,
      ), 'cache_fragment');
      try {
        if ($id = $this->save($cache_fragment)) {
          $fragments[] = $cache_fragment;
        }
      }
      catch (\Exception $e) {
        // Log the exception. It's probably a duplicate fragment.
        watchdog_exception('restful', $e);
      }
    }
    return $fragments;
  }

  /**
   * Gets the existing fragments for a given hash.
   *
   * @param string $hash
   *   The hash.
   *
   * @return CacheFragment[]
   *   An array of fragments.
   */
  protected function existingFragments($hash) {
    $query = new \EntityFieldQuery();
    $results = $query
      ->entityCondition('entity_type', 'cache_fragment')
      ->propertyCondition('hash', $hash)
      ->execute();
    return empty($results['cache_fragment']) ? array() : $this->load(array_keys($results['cache_fragment']));
  }

  /**
   * Generated the cache hash based on the cache fragments collection.
   *
   * @param ArrayCollection $cache_fragments
   *   The collection of tags.
   *
   * @return string
   *   The generated hash.
   */
  public function generateCacheHash(ArrayCollection $cache_fragments) {
    return substr(sha1(serialize($cache_fragments->toArray())), 0, 40);
  }

  /**
   * Gets the hashes for an EFQ.
   *
   * @param \EntityFieldQuery $query
   *   The EFQ.
   *
   * @return string[]
   *   The hashes that meet the conditions.
   */
  public static function lookUpHashes(\EntityFieldQuery $query) {
    $results = $query->execute();
    if (empty($results['cache_fragment'])) {
      return array();
    }
    $fragment_ids = array_keys($results['cache_fragment']);

    // Get the hashes from the base table.
    $info = entity_get_info('cache_fragment');
    $entity_table = $info['base table'];
    $entity_id_key = $info['entity keys']['id'];
    $hashes = db_query('SELECT hash FROM {' . $entity_table . '} WHERE ' . $entity_id_key . ' IN (:ids)', array(
      ':ids' => $fragment_ids,
    ))->fetchCol();
    return $hashes;
  }

  /**
   * Removes all the cache fragments.
   */
  public function wipe() {
    // We are not truncating the entity table so hooks are fired.
    $query = new \EntityFieldQuery();
    $results = $query
      ->entityCondition('entity_type', 'cache_fragment')
      ->execute();
    if (empty($results['cache_fragment'])) {
      return;
    }
    $this->delete(array_keys($results['cache_fragment']));
  }

  /**
   * Get the resource ID for the selected hash.
   *
   * @param string $hash
   *   The unique hash for the cache fragments.
   *
   * @return string
   *   The resource ID.
   */
  public static function resourceIdFromHash($hash) {
    $query = new \EntityFieldQuery();
    $results = $query
      ->entityCondition('entity_type', 'cache_fragment')
      ->propertyCondition('type', 'resource')
      ->propertyCondition('hash', $hash)
      ->range(0, 1)
      ->execute();
    if (empty($results['cache_fragment'])) {
      return NULL;
    }
    $cache_fragment = entity_load_single('cache_fragment', key($results['cache_fragment']));
    $pos = strpos($cache_fragment->value, CacheDecoratedResource::CACHE_PAIR_SEPARATOR);
    return $pos === FALSE ? $cache_fragment->value : substr($cache_fragment->value, 0, $pos);
  }

}
