<?php
/**
 * @file
 * jpanelmenu administration functions.
 */

 /**
 * Implements hook_form().
 */
function jpanelmenu_form($form, &$form_state) {

  // TODO Is the jpanel library installed? / Provide a warning message if not
  $form['jpanelmenu_description'] = array(
    '#markup' => '<p>jPanelMenu is a <a href="http://jquery.com">jQuery</a> plugin that creates a paneled-style menu (like the type seen in the mobile versions of <a href="http://m.facebook.com">Facebook</a> and <a href="http://google.com">Google</a>, as well as in many native iPhone applications). Click <a href="https://github.com/acolangelo/jPanelMenu">here</a> for more infomation</p>',
  );
  $form['jpanelmenu'] = array(
    '#type' => 'vertical_tabs',
    '#default_tab' => 'edit-jpanelmenu-required',
  );

  $form['jpanelmenu_required'] = array(
    '#type' => 'fieldset',
    '#title' => t('Target / Trigger)'),
    '#collapsible' => TRUE,
    '#description' => t('Specify jpanelmenu_optional configuration settings'),
    '#group' => 'jpanelmenu',
    '#required' => TRUE,
  );

  $form['jpanelmenu_optional'] = array(
    '#type' => 'fieldset',
    '#title' => t('Extra Configuration)'),
    '#collapsible' => TRUE,
    '#description' => t('Specify jpanelmenu_optional configuration settings'),
    '#group' => 'jpanelmenu'
  );

  // target
  $form['jpanelmenu_required']['jpanelmenu_target'] = array(
    '#type' => 'textarea',
    '#title' => t('jPanel Target'),
    '#default_value' => variable_get('jpanelmenu_target', JPANELMENU_DEFAULT_TARGET),
    '#rows' => 3,
    '#description' => t('Enter a list of jQuery selector(s) as the "target" for jpanelmenu. Enter each item on a new line'),
    '#required' => TRUE,
    '#group' => 'jpanelmenu_required',
  );
  //trigger
  $form['jpanelmenu_required']['jpanelmenu_trigger'] = array(
    '#type' => 'textarea',
    '#title' => t('jPanel Trigger'),
    '#default_value' => variable_get('jpanelmenu_trigger', JPANELMENU_DEFAULT_TRIGGER),
    '#rows' => 3,
    '#description' => t('Enter list of jQuery selector(s) to "trigger" the jpanelmenu, Enter each item on a new line'),
    '#required' => TRUE,
    '#group' => 'jpanelmenu_required',
  );

  //direction
  $form['jpanelmenu_optional']['jpanelmenu_direction'] = array(
    '#type' => 'select',
    '#title' => t('Direction'),
    '#options' => array(
      'left' => t('Left'),
      'right' => t('Right'),
    ),
    '#default_value' => variable_get('jpanelmenu_direction', JPANELMENU_DEFAULT_DIRECTION),
    '#description' => t('Which direction the menu should open from?'),
    '#group' => 'jpanelmenu_optional',
  );

  //openPosition
  $form['jpanelmenu_optional']['jpanelmenu_open_position'] = array(
    '#type' => 'textfield',
    '#title' => t('Open Position'),
    '#default_value' => variable_get('jpanelmenu_open_position', JPANELMENU_DEFAULT_OPEN_POSITION),
    '#size' => 20,
    '#maxlength' => 10,
    '#description' => t('The measurement value for the open position of the menu. Can be set as a pixel px, percentage %, or em <em>default : 250px</em>'),
    '#group' => 'jpanelmenu_optional',
  );
  return system_settings_form($form);
}