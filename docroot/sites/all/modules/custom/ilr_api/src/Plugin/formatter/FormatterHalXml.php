<?php

/**
 * @file
 * Contains \Drupal\ilr_api\Plugin\formatter\FormatterHalJson.
 */

namespace Drupal\ilr_api\Plugin\formatter;

use Drupal\restful\Plugin\formatter\FormatterHalJson;
use Drupal\restful\Plugin\formatter\FormatterInterface;

/**
 * Class FormatterHalXml
 * @package Drupal\restful\Plugin\formatter
 *
 * @Formatter(
 *   id = "hal_xml",
 *   label = "HAL+XML",
 *   description = "Output in using the HAL conventions and XML format.",
 *   curie = {
 *     "name": "hal",
 *     "path": "doc/rels",
 *     "template": "/{rel}",
 *   },
 * )
 */
class FormatterHalXml extends FormatterHalJson implements FormatterInterface {

  /**
   * Content Type
   *
   * @var string
   */
  protected $contentType = 'application/xml; charset=utf-8';
  protected $courses;
  protected $keys_to_remove = array('id','self');

  /**
   * {@inheritdoc}
   */
  public function render(array $structured_data) {
    $this->courses = $structured_data['_embedded']['hal:course_list'];
    $this->prepareData();
    return $this->arrayToXML($this->courses, new \SimpleXMLElement('<Course_List/>'))->asXML();
  }

  /**
   * Converts the input array into an XML formatted string.
   *
   * @param array $data
   *   The input array.
   * @param \SimpleXMLElement $xml
   *   The object that will perform the conversion.
   *
   * @return \SimpleXMLElement
   */
  protected function arrayToXML(array $data, \SimpleXMLElement $xml) {
    foreach ($this->keys_to_remove as $key => $name) {
      if (isset($data[$name])) {
        unset($data[$name]);
      }
    }
    foreach ($data as $key => $value) {
      if(is_array($value)) {
        if(!is_numeric($key)){
          $subnode = $xml->addChild("$key");
          $this->arrayToXML($value, $subnode);
        }
        else{
          if ($this->portalReady($key)) {
            $subnode = $xml->addChild("Course");
            $nid = $this->courses[$key]['id'];
            $wrapper = ilr_get_node_wrapper($nid);
            $id = (isset($wrapper->field_catalog_prefix))
              ? 'ilr-' . $wrapper->field_catalog_prefix->value()
              : 'ilr-' . $nid;
            $subnode->addAttribute('Id', $id);
            $this->arrayToXML($value, $subnode);
          }

        }
      }
      else {
        $xml->addChild("$key", htmlspecialchars("$value"));
      }
    }
    return $xml;
  }

  protected function prepareData() {
    foreach ($this->courses as $key => $name) {
      if (in_array($name, $this->keys_to_remove)) {
        unset($data[$name]);
      }
    }
  }

  protected function portalReady($key) {
    $wrapper = ilr_get_node_wrapper($this->courses[$key]['id']);
    if (isset($wrapper->field_on_demand)) { // Checks to see if it's a course
      return $wrapper->field_on_demand->value() || $wrapper->field_setting->value() == 'online';
    }
    return TRUE; // Default to show all nodes
  }
}
