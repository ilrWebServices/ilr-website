<?php
/**
 * @file
 * Bean: Filter
 */

abstract class IlrViewBean extends BeanPlugin {
  private $bean;
  protected $view_name;
  protected $display_id;

  /**
   * Declares default block settings.
   * 'type' value determines whether tag query should be inclusive or exclusive
   */
  public function values() {
    $values = array(
      'exposed' => array(),
      'items_per_page' => 5,
    );

    return array_merge(parent::values(), $values);
  }

  /**
   * Builds extra settings for the block edit form.
   */
  public function form($bean, $form, &$form_state) {

    $form = array();
    $form_state['conf'] = isset($bean->data)? $bean->data: array();
    $form_state['subtype_name'] = $this->getCtoolsSubType();
    $form_state['exposed'] = $bean->data['exposed'];
    $form_state['contexts'] = array();
    module_load_include('inc', 'views_content', 'plugins/content_types/views_panes');
    $form += views_content_views_panes_content_type_edit_form($form, $form_state);


    return $form;
  }
  protected function getCtoolsSubType() {
    return $this->view_name . '-' . $this->display_id;
  }



  /**
   * Displays the bean.
   */
  public function view($bean, $content, $view_mode = 'default', $langcode = NULL) {
    module_load_include('inc', 'views_content', 'plugins/content_types/views_panes');
    module_load_include('inc', 'ctools', 'includes/content');
    $subtype = $this->getCtoolsSubType();
    $conf = $bean->data;
    $ctools_content = views_content_views_panes_content_type_render($subtype,$conf, array(), array());
    return $ctools_content->content;
  }
}
