<?php
/**
 * @file
 * API documentation for Social Feed Field.
 *
 * This file contains the hooks that are defined by this module.
 *
 * For more information you can also take a look at the submodules that are
 * implementing these hooks.
 */

/**
 * Provide a channel that is used in the social feed field.
 *
 * @return array
 *   The defined new channel.
 */
function hook_social_feed_fields_channel() {
  return array(
    // The key of the array is the machine name of the channel.
    'channel_name' => array(
      // The readable name of the channel.
      'name' => t('Readable channel name'),
      // The channel description. This is used as the description below the form
      // field.
      'description' => t('Channel description.'),
      // The callback function. This function MUST always return a array with
      // the rendered items.
      'callback' => 'callback_function_name',
      // Optional: The path to the file containing the callback.
      'file' => 'path/to/file/containing/callback',
      // Optional: Form fields used for configuration. You should use these
      // values for things like access tokens, or api keys.
      // These values are eventually used in a function that uses the Form API.
      // That's why you can use very kind of Form API elements.
      'admin' => array(
        'consumer_key' => array(
          '#type' => 'textfield',
          '#title' => t('Consumer key'),
        ),
        'consumer_secret' => array(
          '#type' => 'textfield',
          '#title' => t('Consumer secret'),
        ),
      ),
    ),
  );
}
