<?php
/**
 * @file
 * ilr_forms_public.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_forms_public_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function ilr_forms_public_default_entityform_type() {
  $items = array();
  $items['course_request'] = entity_import('entityform_type', '{
    "type" : "course_request",
    "label" : "Course Request",
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
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
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
        "36" : 0,
        "21" : 0,
        "26" : 0,
        "31" : 0,
        "56" : 0,
        "61" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EThanks for your interest in customized delivery of \\u003Cem\\u003E[current-page:query:title]\\u003C\\/em\\u003E. Please provide the following information and a representative will be in touch with you shortly.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "send_confirmation_email_to_user" : 0,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0,
      "add_payment_processing" : 0,
      "form_submission_ilr_recipient" : "ILRCustomerService@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['emediation_competition_reg'] = entity_import('entityform_type', '{
    "type" : "emediation_competition_reg",
    "label" : "eMediation Competition Registration",
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
      "submission_page_title" : "Thank you",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for registering for this year\\u0027s eMediation Competition. You will receive a confirmation email shortly. If you have any questions, please contact Katrina Nobles, \\u003Ca href=\\u0022mailto:kn64@cornell.edu\\u0022\\u003Ekn64@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[entityform:event_info]\\u003C\\/p\\u003E\\r\\n",
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
      "kerberized" : 0,
      "add_payment_processing" : 0,
      "form_submission_ilr_recipient" : "kn64@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['join_the_ics_mailing_list'] = entity_import('entityform_type', '{
    "type" : "join_the_ics_mailing_list",
    "label" : "Join the ICS Mailing List",
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
      "submission_page_title" : "",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for your request to join the Institute for Compensation Studies mailing list. If you have any questions, please contact us at \\u003Ca href=\\u0022mailto:ICS-ILR@cornell.edu\\u0022\\u003EICS-ILR@cornell.edu\\u003C\\/a\\u003E, or by phone at 866-470-1922.\\u003C\\/p\\u003E\\r\\n",
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
      "form_submission_ilr_recipient" : "ICS-ILR@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
