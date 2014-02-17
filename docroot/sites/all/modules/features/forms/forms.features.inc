<?php
/**
 * @file
 * forms.features.inc
 */

/**
 * Implements hook_default_entityform_type().
 */
function forms_default_entityform_type() {
  $items = array();
  $items['ilr_website_feedback'] = entity_import('entityform_type', '{
    "type" : "ilr_website_feedback",
    "label" : "ILR Website Feedback",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Send Comments",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "ILR Website Feedback Form Confirmation",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for your feedback about the ILR Website.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "3" : 0,
        "4" : 0,
        "6" : 0,
        "5" : 0,
        "7" : 0,
        "8" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" }
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['student_services_contact_form'] = entity_import('entityform_type', '{
    "type" : "student_services_contact_form",
    "label" : "Student Services Contact Form",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Submit",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : {
        "value" : "\\u003Ch3\\u003EThank you\\u003C\\/h3\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYour questions and comments have been sent to ILR Student Services. If you provided your email address, you will receive a confirmation email shortly, and a personalized response within 3-5 business days.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThank you for your interest.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EOffice of Student Services, ILR School, Cornell University\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "3" : 0,
        "4" : 0,
        "6" : 0,
        "5" : 0,
        "7" : 0,
        "8" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" }
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
