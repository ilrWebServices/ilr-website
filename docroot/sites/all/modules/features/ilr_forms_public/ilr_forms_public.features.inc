<?php

/**
 * @file
 * ilr_forms_public.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_forms_public_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ilr_forms_public_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function ilr_forms_public_default_entityform_type() {
  $items = array();
  $items['course_follow'] = entity_import('entityform_type', '{
    "type" : "course_follow",
    "label" : "Course Follow",
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
        "2" : 0,
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
        "value" : "\\u003Cp\\u003ETell us your email and we\\u0027ll notify you when new classes are offered for this course.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0,
      "add_payment_processing" : 0,
      "form_submission_ilr_recipient" : "ilrcustomerservice@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
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
        "21" : 0,
        "26" : 0,
        "31" : 0,
        "56" : 0,
        "61" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EThank you for your interest in customized delivery of \\u003Cem\\u003E[current-page:query:title]\\u003C\\/em\\u003E.\\u0026nbsp; Custom programs are aligned, focused, collaborative and cost effective.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EPlease provide the following information and a representative will be in touch with you shortly.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0,
      "add_payment_processing" : 0,
      "form_submission_ilr_recipient" : "ILRCustomerService@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['email_unsubscribe'] = entity_import('entityform_type', '{
    "type" : "email_unsubscribe",
    "label" : "Email unsubscribe",
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
        "2" : 0,
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
      "redirect_path" : "\\u003Cfront\\u003E",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 0,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "ilrcommunications@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
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
  $items['groat_registration'] = entity_import('entityform_type', '{
    "type" : "groat_registration",
    "label" : "Groat Registration",
    "data" : {
      "draftable" : 1,
      "draft_redirect_path" : "pay\\/checkout",
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
        "value" : "\\u003Cp\\u003EThank you for your registration for the 2020 Groat and Alpern Awards Celebration.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThursday, April 23, 2020\\u003Cbr\\u003E\\r\\n\\t6:00 PM to 9:00 PM\\u003Cbr\\u003E\\r\\n\\tPierre Hotel, Grand Ballroom and Garden Foyer\\u003Cbr\\u003E\\r\\n\\t2 East 61st Street at Fifth Avenue\\u003Cbr\\u003E\\r\\n\\tNew York City\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Cspan style=\\u0022font-size: 13.008px;\\u0022\\u003EReceipt of your registration has been emailed to you.\\u0026nbsp;\\u003C\\/span\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n",
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
        "21" : 0,
        "26" : 0,
        "31" : 0,
        "56" : 0,
        "61" : 0,
        "62" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "pay\\/checkout",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EWe look forward to seeing you at the Groat Alpern 2020 Celebration.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThursday, April 23, 2020\\u003Cbr\\u003E\\r\\n\\t6:00 PM to 9:00 PM\\u003Cbr\\u003E\\r\\n\\tPierre Hotel, Grand Ballroom and Garden Foyer\\u003Cbr\\u003E\\r\\n\\t2 East 61st Street at Fifth Avenue\\u003Cbr\\u003E\\r\\n\\tNew York City\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EA portion of each registration will be a gift to the ILR School to support our student programs.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cul\\u003E\\r\\n\\t\\u003Cli\\u003E$290 - Standard; includes a $50 gift to ILR\\u003C\\/li\\u003E\\r\\n\\t\\u003Cli\\u003E$100 - Recent alumni (class of 2014 - 2019); includes a $20 gift to ILR\\u003C\\/li\\u003E\\r\\n\\t\\u003Cli\\u003E$50 - Class of 2019 alumni; includes a $10 gift to ILR\\u003C\\/li\\u003E\\r\\n\\u003C\\/ul\\u003E\\r\\n",
        "format" : "full_html"
      },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "ss446@cornell.edu",
      "add_payment_processing" : 1,
      "hpp" : "6"
    },
    "weight" : "0",
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/groat-registration",
        "alias" : "alumni\\/get-involved\\/groat-and-alpern-awards\\/register",
        "language" : "und"
      }
    }
  }');
  $items['groat_sponsor'] = entity_import('entityform_type', '{
    "type" : "groat_sponsor",
    "label" : "Groat sponsor",
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
        "2" : "2",
        "51" : "51",
        "1" : 0,
        "11" : 0,
        "16" : 0,
        "41" : 0,
        "46" : 0,
        "21" : 0,
        "26" : 0,
        "31" : 0,
        "56" : 0,
        "61" : 0,
        "62" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EAdd a record for each sponsor.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "send_confirmation_email_to_user" : 0,
      "send_confirmation_email_to_admin" : 0,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : {
      "submit" : {
        "source" : "eform\\/submit\\/groat-sponsor",
        "alias" : "alumni\\/groat\\/admin\\/add_sponsor",
        "language" : "und"
      },
      "confirm" : {
        "source" : "eform\\/groat-sponsor\\/confirm",
        "alias" : "alumni\\/groat\\/admin\\/sponsor_added",
        "language" : "und"
      }
    }
  }');
  $items['ilr_conf_center_reservation'] = entity_import('entityform_type', '{
    "type" : "ilr_conf_center_reservation",
    "label" : "ILR conference center reservation ",
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
      "submission_page_title" : "Your reservation request has been submitted",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for your interest in reserving space at the \\u003Cstrong\\u003EILR Conference Center\\u003C\\/strong\\u003E. Please check your email for a confirmation message and contact information.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Cb\\u003EPlease know your submission is not a confirmation of your request.\\u003C\\/b\\u003E You will receive a more detailed response from us within two business days.\\u003C\\/p\\u003E\\r\\n",
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
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EIf you are interested in reserving space in the ILR Conference Center in Ithaca or NYC, please submit this form. A member of the Conference Center team will contact you with availability and information related to your request within two business days.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003EPLEASE NOTE: Submission of this form is only an initial inquiry and does not imply a confirmation of your reservation request.\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "ilrconferencecenter@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['ilr_sports_summit_event_registra'] = entity_import('entityform_type', '{
    "type" : "ilr_sports_summit_event_registra",
    "label" : "ILR Sports Summit Event Registration",
    "data" : {
      "draftable" : 1,
      "draft_redirect_path" : "pay\\/checkout",
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
        "value" : "\\u003Cp\\u003E\\u003Cstrong\\u003ESports Leadership Summit Registration Confirmation\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThank you for your registration. You will receive an email confirmation shortly. If you have any questions, please contact Sue Sappington in the Alumni Affairs Development Office, \\u003Ca href=\\u0022mailto:ss446@cornell.edu\\u0022\\u003Ess446@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EEvent Details:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[entityform:event_info]\\u003C\\/p\\u003E\\r\\n",
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
        "21" : 0,
        "26" : 0,
        "31" : 0,
        "56" : 0,
        "61" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "pay\\/checkout",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "ss446@cornell.edu",
      "add_payment_processing" : 1,
      "hpp" : "6"
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['join_hcd_mail_list'] = entity_import('entityform_type', '{
    "type" : "join_hcd_mail_list",
    "label" : "Join the HCD Mailing List",
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
        "value" : "\\u003Cp\\u003EThank you for your request to be added to Cornell ILR\\u0027s Human Capital Development mailing list. Our training programs help you gain skills that make an impact in the workplace. We appreciate your interest in Cornell and hope to welcome you to one of our programs in the near future.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have questions, please email \\u003Ca href=\\u0022mailto:ilrcustomerservice@cornell.edu\\u0022\\u003EILR Customer Service\\u003C\\/a\\u003E or call us at 866-470-1922.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ECornell University\\u003Cbr\\u003E\\r\\n\\tILR School\\u003Cbr\\u003E\\r\\n\\tHuman Capital Development\\u003Cbr\\u003E\\r\\n\\t16 East 34th Street\\u003Cbr\\u003E\\r\\n\\tNew York, NY 10016-4328\\u003C\\/p\\u003E\\r\\n",
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
      "form_submission_ilr_recipient" : "ilrcustomerservice@cornell.edu"
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
  $items['labor_and_the_constitution_event'] = entity_import('entityform_type', '{
    "type" : "labor_and_the_constitution_event",
    "label" : "Labor and the Constitution Event Registration",
    "data" : {
      "draftable" : 1,
      "draft_redirect_path" : "pay\\/checkout",
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
        "value" : "\\u003Cp\\u003E\\u003Cstrong\\u003ELabor and the Consitution: Past, Present and Future\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThank you for your registration. You will receive an email confirmation shortly. If you have any questions, please contact Rhonda Clouse with Cornell University\\u0027s ILR School, \\u003Ca href=\\u0022mailto:rlc29@cornell.edu\\u0022\\u003Erlc29@cornell.edu\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EEvent Details:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[entityform:event_info]\\u003C\\/p\\u003E\\r\\n",
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
        "21" : 0,
        "26" : 0,
        "31" : 0,
        "56" : 0,
        "61" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "pay\\/checkout",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "rlc29@cornell.edu",
      "add_payment_processing" : 1,
      "hpp" : "6"
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['microsite_interest'] = entity_import('entityform_type', '{
    "type" : "microsite_interest",
    "label" : "Microsite interest",
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
        "2" : 0,
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
      "send_confirmation_email_to_user" : 0,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "sportsleadership@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['sports_camp_application'] = entity_import('entityform_type', '{
    "type" : "sports_camp_application",
    "label" : "Sports Camp Application",
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
        "value" : "\\u003Cp\\u003EThank you for your applying for the Sports Leadership Summer Camp!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EApplications are reviewed on a rolling basis. We will stop accepting applications once the camp is full so we encourage students to apply as early as possible. Students will be notified of their status within two to three weeks of their application submission.\\u003C\\/p\\u003E\\r\\n",
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
      "resubmit_action" : "disallow",
      "redirect_path" : "\\/sports-leadership-camp",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 0,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "sportsleadership@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['sports_leadership_camp_payment'] = entity_import('entityform_type', '{
    "type" : "sports_leadership_camp_payment",
    "label" : "Sports Leadership Camp Payment",
    "data" : {
      "draftable" : 1,
      "draft_redirect_path" : "pay\\/checkout",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Proceed to Payment",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for your payment for the Cornell Sports Leadership Camp. You will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have questions, please contact \\u003Ca href=\\u0022mailto:sportsleadership@cornell.edu\\u0022\\u003Esportsleadership@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n",
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
        "21" : 0,
        "26" : 0,
        "31" : 0,
        "56" : 0,
        "61" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "pay\\/checkout",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 0,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "sportsleadership@cornell.edu",
      "add_payment_processing" : 1,
      "hpp" : "6"
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['sports_leadership_interest'] = entity_import('entityform_type', '{
    "type" : "sports_leadership_interest",
    "label" : "Sports Leadership Interest",
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
        "2" : 0,
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
      "send_confirmation_email_to_user" : 0,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "cnw3@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['wi_ilo_new_world_of_work_reg'] = entity_import('entityform_type', '{
    "type" : "wi_ilo_new_world_of_work_reg",
    "label" : "WI ILO New World of Work reg",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Add me to the wait list",
      "submit_confirm_msg" : "Thank you for registering for the wait list. We\\u0027ve sent you a confirmation email.",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Thank you for registering.",
      "submission_text" : { "value" : "", "format" : "full_html" },
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
        "21" : 0,
        "26" : 0,
        "31" : 0,
        "56" : 0,
        "61" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "new-world-of-work",
      "instruction_pre" : {
        "value" : "\\u003Ch2\\u003EJoin the Waiting List\\u003C\\/h2\\u003E\\r\\n\\r\\n\\u003Ch3 style=\\u0022text-align: center; line-height: 1.6\\u0022\\u003E\\u003Cstrong\\u003EOnline registrations for this event are now closed\\u003Cbr\\u003E\\r\\n\\tPlease complete the following form to add your name to the waiting list\\u003C\\/strong\\u003E\\u003C\\/h3\\u003E\\r\\n",
        "format" : "full_html"
      },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "ilr-outreach@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
