<?php
/**
 * @file
 * ilr_forms_students.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_forms_students_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function ilr_forms_students_default_entityform_type() {
  $items = array();
  $items['mlb_today_with_rob_manfred'] = entity_import('entityform_type', '{
    "type" : "mlb_today_with_rob_manfred",
    "label" : "MLB Today with Rob Manfred",
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
      "submission_page_title" : "MLB Today with Rob Manfred",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for registering. You will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003EYou will need to bring your Cornell ID and the confirmation email (electronic or printed) to the event.\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EEvent Details:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[entityform:event_info]\\u003C\\/p\\u003E\\r\\n",
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
      "kerberized" : 1,
      "add_payment_processing" : 0,
      "form_submission_ilr_recipient" : "ss446@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['transfer_offer'] = entity_import('entityform_type', '{
    "type" : "transfer_offer",
    "label" : "ILR School Transfer Option",
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
      "submission_page_title" : "ILR Transfer Option Confirmation",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EYour Transfer Option (TO) response has been submitted. You will receive an email confirmation shortly. If you have any questions, please contact the ILR Admissions Office at 607-255-2222 or \\u003Ca href=\\u0022mailto:ilradmissions@cornell.edu\\u0022\\u003Eilradmissions@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n",
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
      "send_confirmation_email_to_admin" : 0,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0,
      "add_payment_processing" : 0,
      "form_submission_ilr_recipient" : "ilradmissions@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
