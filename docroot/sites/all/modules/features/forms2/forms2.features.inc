<?php
/**
 * @file
 * forms2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forms2_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function forms2_default_entityform_type() {
  $items = array();
  $items['forensics_debate_camp_payment'] = entity_import('entityform_type', '{
    "type" : "forensics_debate_camp_payment",
    "label" : "Forensics International Summer Debate Camp Payment",
    "data" : {
      "draftable" : 1,
      "draft_redirect_path" : "[current-page:url]",
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
        "value" : "\\u003Cp\\u003EThank you for your payment for the International Summer Debate Camp. You will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf the required student information forms have not been returned already, the next step in the registration process is to print them, fill them out, and return them. Students will not be allowed to participate in the camp if these forms are not completed. The link to the forms is included in the confirmation email.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have questions, please contact Lindsay Bing at \\u003Ca href=\\u0022mailto:lb542@cornell.edu\\u0022\\u003Elb542@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n",
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
      "redirect_path" : "[current-page:url]",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 0,
      "add_payment_processing" : 1,
      "form_submission_ilr_recipient" : "lb542@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['scheinman_webcast_registration'] = entity_import('entityform_type', '{
    "type" : "scheinman_webcast_registration",
    "label" : "Scheinman Institute Webcast Registration",
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
        "value" : "\\u003Cp\\u003EThank you for registering for the upcoming Scheinman Institute webcast.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EEvent Details:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[entityform:event_info]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThe webcast connection information will be sent to your email address closer to the event date.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003ETechnology Requirements\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EScheinman Institute webcasts can be viewed using computers or mobile devices. The Silverlight plug-in is required. Click the test webcast link below to test your computer; if necessary, you may be instructed to download Silverlight.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you can watch this test webcast you should have no problem viewing the live event:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022http:\\/\\/events.mediasite.com\\/Mediasite\\/Play\\/6d6161cbf54a4e6fbcdcef116d0a2acc1d\\u0022\\u003Ehttp:\\/\\/events.mediasite.com\\/Mediasite\\/Play\\/6d6161cbf54a4e6fbcdcef116d0a2acc1d\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYou should be able to click through the slides on the left, and view the video in the lower right.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions about the webcast, please let us know.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EKatrina Nobles\\u003Cbr\\u003E\\r\\n\\tCornell University, ILR School\\u003Cbr\\u003E\\r\\n\\tEmail: kn64\\u003Ca href=\\u0022mailto:lb274@cornell.edu\\u0022\\u003E@cornell.edu\\u003C\\/a\\u003E\\u003Cbr\\u003E\\r\\n\\tPhone: (607) 255-0704\\u003C\\/p\\u003E\\r\\n",
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
      "form_submission_ilr_recipient" : "ilrcr@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
