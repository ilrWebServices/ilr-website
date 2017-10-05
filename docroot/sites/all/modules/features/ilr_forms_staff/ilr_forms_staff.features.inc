<?php
/**
 * @file
 * ilr_forms_staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_forms_staff_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function ilr_forms_staff_default_entityform_type() {
  $items = array();
  $items['office_professionals_day_reg'] = entity_import('entityform_type', '{
    "type" : "office_professionals_day_reg",
    "label" : "Office Professionals Day Registration",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Jennie T. Farley Office Professionals Day Registration Confirmation",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for registering for the Jennie T. Farley Office Professionals Day celebration. You will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EEvent Details:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[entityform:event_info]\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "11" : 0,
        "16" : 0,
        "41" : 0,
        "51" : 0,
        "46" : 0,
        "36" : 0,
        "21" : 0,
        "26" : 0,
        "31" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 0,
      "add_payment_processing" : 0,
      "form_submission_ilr_recipient" : "tlm6@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['theme_grant_application'] = entity_import('entityform_type', '{
    "type" : "theme_grant_application",
    "label" : "Theme grant application",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "ILR Theme Grant Application",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for your interest in the ILR Theme Project and for your grant proposal.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "11" : 0,
        "16" : 0,
        "41" : 0,
        "51" : 0,
        "46" : 0,
        "21" : 0,
        "26" : 0,
        "31" : 0,
        "56" : 0,
        "61" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 1,
      "form_submission_ilr_recipient" : "kml297@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
