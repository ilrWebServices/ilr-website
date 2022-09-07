<?php

/**
 * @file
 * ilr_forms_students.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_forms_students_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ilr_forms_students_default_entityform_type() {
  $items = array();
  $items['alumni_assoc_board_interest'] = entity_import('entityform_type', '{
    "type" : "alumni_assoc_board_interest",
    "label" : "Run for the ILR AA Board",
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
        "value" : "\\u003Cp\\u003EThank you for your interest in running for the ILR Alumni Association Board.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions, please contact Sue Sappington, \\u003Ca href=\\u0022mailto:ss446@cornell.edu\\u0022\\u003Ess446@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n",
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
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EThank you for your interest in being a candidate for the ILR Alumni Association Board.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EPlease complete the following form to have your named entered for consideration.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "ss446@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : {
      "submit" : {
        "source" : "eform\\/submit\\/alumni-assoc-board-interest",
        "alias" : "alumni\\/get-involved\\/alumni-association\\/ilr-alumni-association-board-directors\\/run-for-ilr-aa-board",
        "language" : "und"
      },
      "confirm" : {
        "source" : "eform\\/alumni-assoc-board-interest\\/confirm",
        "alias" : "alumni\\/get-involved\\/alumni-association\\/ilr-alumni-association-board-directors\\/run-for-ilr-aa-board-thank-you",
        "language" : "und"
      }
    }
  }');
  $items['alumni_events_for_students_reg'] = entity_import('entityform_type', '{
    "type" : "alumni_events_for_students_reg",
    "label" : "ILR Alumni Events for Students - Registration",
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
      "submission_page_title" : "Thank you for registering",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for your registration. You will receive an email confirmation shortly. If you have any questions, please contact Sue Sappington in the Alumni Affairs Development Office, \\u003Ca href=\\u0022mailto:ss446@cornell.edu\\u0022\\u003Ess446@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EEvent Details:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[entityform:event_info]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[entityform:calendar_info]\\u003C\\/p\\u003E\\r\\n",
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
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 1,
      "form_submission_ilr_recipient" : "ss446@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['buffalo_dem_summer_fellow_apply'] = entity_import('entityform_type', '{
    "type" : "buffalo_dem_summer_fellow_apply",
    "label" : "Buffalo democracy summer fellowship application",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Submit application",
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
        "1" : 0,
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
        "value" : "\\u003Ch2\\u003EDemocracy Summer Fellowships\\u003C\\/h2\\u003E\\r\\n\\r\\n\\u003Ch3\\u003ESummer 2019 in Buffalo NY\\u003C\\/h3\\u003E",
        "format" : "full_html"
      },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 1,
      "form_submission_ilr_recipient" : "mlc322@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['career_and_networking_panels'] = entity_import('entityform_type', '{
    "type" : "career_and_networking_panels",
    "label" : "Student-Alumni Career Pathways:  Endless Possibilities",
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
      "submission_page_title" : "Student-Alumni Career Pathways:  Endless Possibilities",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for registering for the ILR Alumni Association\\u0027s Career and Networking Panels event. You will receive a confirmation email shortly, indicating which sessions you signed up to attend.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EEvent Details:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[entityform:event_info]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EPlease refer to the original email you received for the full details about this event.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions, please contact Sue Sappington, \\u003Ca href=\\u0022mailto:ss446@cornell.edu\\u0022\\u003Ess446@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n",
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
      "kerberized" : 1,
      "form_submission_ilr_recipient" : "ss446@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['check_your_eligibility_milr'] = entity_import('entityform_type', '{
    "type" : "check_your_eligibility_milr",
    "label" : "MILR: Check Your Eligibility",
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
      "submission_page_title" : "MILR: Check Your Eligibility",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you! We have received your completed pre-assessment for the Cornell University ILR School Master of Industrial and Labor Relations (MILR) program, and look forward to evaluating your information. You will receive an email confirmation shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYour email address is listed below. If it\\u0027s incorrect, please contact our office so that we will be able to respond.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EGraduate Programs Office\\u003Cbr\\u003E\\r\\n\\tILR School at Cornell University\\u003Cbr\\u003E\\r\\n\\t\\u003Ca href=\\u0022mailto:ilrgradapplicant@cornell.edu\\u0022\\u003Eilrgradapplicant@cornell.edu\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Cem\\u003ENote: Cornell University will not sell, rent, trade or otherwise distribute your email address or personal contact information. See the \\u003Ca href=\\u0022http:\\/\\/www.ilr.cornell.edu\\/privacy.html\\u0022\\u003EILR School Privacy Policy\\u003C\\/a\\u003E for more information.\\u003C\\/em\\u003E\\u003C\\/p\\u003E\\r\\n",
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
      "form_submission_ilr_recipient" : "ilrgradapplicant@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['democracy_summer_fellowship_appl'] = entity_import('entityform_type', '{
    "type" : "democracy_summer_fellowship_appl",
    "label" : "Democracy summer fellowship application",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Submit application",
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
        "1" : 0,
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
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Ch2\\u003EDemocracy Summer Fellowships for Cornell Students\\u003C\\/h2\\u003E\\r\\n\\r\\n\\u003Ch3\\u003ESummer 2020 in Buffalo NY\\u003C\\/h3\\u003E\\r\\n",
        "format" : "full_html"
      },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 1,
      "form_submission_ilr_recipient" : "mlc322@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['fex_student_application'] = entity_import('entityform_type', '{
    "type" : "fex_student_application",
    "label" : "FSO Student Application",
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
      "submission_page_title" : "FSO Application Received",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for submitting an application for a FSO opportunity. You will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions, please contact the FSO coordinator at \\u003Ca href=\\u0022mailto:ilrocsexplore@cornell.edu\\u0022\\u003Eilrocsexplore@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EILR School Office of Career Services\\u003Cbr\\u003E\\r\\n\\tCornell University\\u003C\\/p\\u003E\\r\\n",
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
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 1,
      "form_submission_ilr_recipient" : "ilrocsexplore@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['fex_wisp_sponsor_registration'] = entity_import('entityform_type', '{
    "type" : "fex_wisp_sponsor_registration",
    "label" : "FSO\\/CEO Sponsor Registration",
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
      "submission_page_title" : "FEX\\/WISP Sponsorship Registration Confirmation",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for your participation in the FEX\\/WISP Program. You will receive a confirmation email containing full details of your sponsorship.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions, please contact ILR Career Services.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EOffice of Career Services\\u003Cbr\\u003E\\r\\n\\tILR School\\u003Cbr\\u003E\\r\\n\\tCornell University\\u003Cbr\\u003E\\r\\n\\t(607) 255-0836\\u003Cbr\\u003E\\r\\n\\tFEX: \\u003Ca href=\\u0022mailto:ilrocsexplore@cornell.edu\\u0022\\u003Eilrocsexplore@cornell.edu\\u003C\\/a\\u003E\\u003Cbr\\u003E\\r\\n\\tWISP: \\u003Ca href=\\u0022mailto:ilrocsexplore@cornell.edu\\u0022\\u003Eilrocsexplore@cornell.edu\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n",
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
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "ilrocsexplore@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['grad_info_session_registration'] = entity_import('entityform_type', '{
    "type" : "grad_info_session_registration",
    "label" : "MILR Information Session Registration",
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
      "submission_page_title" : "Thank you for registering",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for registering for the upcoming ILR Graduate Programs MILR information session.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[entityform:event_info]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYour email address is listed below. If it\\u0026#39;s incorrect, please contact our office so that we will be able to respond.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EGraduate Programs Office\\u003Cbr \\/\\u003E\\r\\n\\tILR School at Cornell University\\u003Cbr \\/\\u003E\\r\\n\\t\\u003Ca href=\\u0022mailto:ilrgradapplicant@cornell.edu\\u0022\\u003Eilrgradapplicant@cornell.edu\\u003C\\/a\\u003E\\u003Cbr \\/\\u003E\\r\\n\\t607-255-1522\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Cem\\u003ENote: Cornell University will not sell, rent, trade or otherwise distribute your email address or personal contact information. See the \\u003Ca href=\\u0022http:\\/\\/www.ilr.cornell.edu\\/privacy.html\\u0022\\u003EILR School Privacy Policy\\u003C\\/a\\u003E for more information.\\u003C\\/em\\u003E\\u003C\\/p\\u003E\\r\\n",
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
      "form_submission_ilr_recipient" : "ilrgradapplicant@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['graduate_programs_inquiry'] = entity_import('entityform_type', '{
    "type" : "graduate_programs_inquiry",
    "label" : "ILR Graduate Programs Inquiry",
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
        "value" : "\\u003Cp\\u003EThank you for contacting the ILR Graduate Programs Office. You will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYour email address is listed below. If it\\u0027s incorrect, please let us know, so that we will be able to respond to your inquiry.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EGraduate Programs Office\\u003Cbr\\u003E\\r\\n\\tILR School at Cornell University\\u003Cbr\\u003E\\r\\n\\t\\u003Ca href=\\u0022mailto:ilrgradapplicant@cornell.edu\\u0022\\u003Eilrgradapplicant@cornell.edu\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n",
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
      "form_submission_ilr_recipient" : "ilrgradapplicant@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['gsa_event_request_form'] = entity_import('entityform_type', '{
    "type" : "gsa_event_request_form",
    "label" : "GSA Event Request Form",
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
        "61" : 0,
        "62" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "ilrgradprograms@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['high_road_fellowship_application'] = entity_import('entityform_type', '{
    "type" : "high_road_fellowship_application",
    "label" : "High road fellowship application",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Submit application",
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
        "1" : 0,
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
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Ch2\\u003EEngaged Learning \\u0026amp; Research Fellowships for Cornell Students\\u003C\\/h2\\u003E\\r\\n\\r\\n\\u003Ch3\\u003ESummer 2021 | Buffalo NY\\u003C\\/h3\\u003E\\r\\n",
        "format" : "full_html"
      },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 1,
      "form_submission_ilr_recipient" : "njg56@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['ilr_grad_research_assistance_app'] = entity_import('entityform_type', '{
    "type" : "ilr_grad_research_assistance_app",
    "label" : "ILR Grad Research Assistance Application Form",
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
        "value" : "\\u003Ch2\\u003EILR Graduate Research Assistance Application\\u003C\\/h2\\u003E\\r\\n\\r\\n\\u003Ch3\\u003EYour application has been submitted.\\u003C\\/h3\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThank you for submitting your application for research assistance.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions or concerns about your application, please email the ILR Graduate Programs Office at: \\u003Ca href=\\u0022mailto:ilrgradprograms@cornell.edu\\u0022\\u003Eilrgradprograms@cornell.edu\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n",
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
      "kerberized" : 1,
      "form_submission_ilr_recipient" : "ilrgradforms@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['ilr_mps_nyc_open_house_rsvp'] = entity_import('entityform_type', '{
    "type" : "ilr_mps_nyc_open_house_rsvp",
    "label" : "ILR MPS-NYC Open House RSVP",
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
      "submission_page_title" : "Thank you for your RSVP!",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for your interest in attending our open house and learning more about Cornell\\u2019s part-time MPS program in NYC. Your RSVP is confirmed. You will receive a reminder and more details closer to the event.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIn the meantime, please don\\u2019t hesitate to contact us at \\u003Ca href=\\u0022mailto:mpsnyc@cornell.edu\\u0022\\u003Empsnyc@cornell.edu\\u003C\\/a\\u003E with any questions. We look forward to meeting you!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[entityform:event_info]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ELearning the world of organizations inside and out will help you develop greater insight into C-level thinking. You\\u2019ll reframe your questions and hone your abilities to define and communicate answers. Through the \\u003Ca href=\\u0022https:\\/\\/www.ilr.cornell.edu\\/programs\\/graduate-degree-programs\\/mps-program-new-york-city\\/curriculum\\u0022\\u003Emultidisciplinary curriculum and organizational capstone project\\u003C\\/a\\u003E, you\\u2019ll gain competencies that can be applied whether you\\u2019re leading a team, a department, or an entire organization, and whether you work for an international corporation, a family-owned business, a public-sector agency, a non-profit, or as a consultant.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EOur Midtown Manhattan location and a \\u003Ca href=\\u0022https:\\/\\/www.ilr.cornell.edu\\/programs\\/graduate-degree-programs\\/mps-program-new-york-city\\/academics-curriculum\\/program-structure\\u0022\\u003Epart-time schedule\\u003C\\/a\\u003E designed to complement the demands of your busy work life mean you can earn your master\\u2019s from Cornell in just 21 months, without interrupting your career.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EUnderstand how and why people and organizations succeed, test new concepts and ideas for pushing your workplace to a higher level, and discover new directions in which your career can evolve.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022https:\\/\\/www.ilr.cornell.edu\\/programs\\/graduate-degree-programs\\/mps-program-new-york-city\\u0022\\u003Ewww.ilr.cornell.edu\\/mpsnyc\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EOur graduates effect change. Learn \\u003Ca href=\\u0022https:\\/\\/www.ilr.cornell.edu\\/programs\\/graduate-degree-programs\\/mps-program-new-york-city\\/apply\\u0022\\u003Ehow to apply\\u003C\\/a\\u003E and find answers to \\u003Ca href=\\u0022https:\\/\\/www.ilr.cornell.edu\\/programs\\/graduate-degree-programs\\/mps-program-new-york-city\\/faq\\u0022\\u003EFAQs\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EFollowing is the information that you submitted:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "11" : "11",
        "1" : 0,
        "2" : 0,
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
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "mpsnyc@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : { "confirm" : {
        "source" : "eform\\/ilr-mps-nyc-open-house-rsvp\\/confirm",
        "alias" : "programs\\/graduate-degree-programs\\/mps-program-new-york-city\\/mps-nyc-open-house-submitted",
        "language" : "und"
      }
    }
  }');
  $items['ilr_reception_parent_orientation'] = entity_import('entityform_type', '{
    "type" : "ilr_reception_parent_orientation",
    "label" : "ILR Reception for New Parents",
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
      "submission_page_title" : "ILR Reception for New Parents - Registration Confirmation",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for registering for the ILR Reception for New Parents. You will receive a confirmation email shortly. If you have any questions, please contact Sue Sappington in the Alumni Affairs Development Office, \\u003Ca href=\\u0022mailto:ss446@cornell.edu\\u0022\\u003Ess446@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[entityform:event_info]\\u003C\\/p\\u003E\\r\\n",
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
      "form_submission_ilr_recipient" : "ss446@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['ilr_visit_day_registration'] = entity_import('entityform_type', '{
    "type" : "ilr_visit_day_registration",
    "label" : "ILR Visit Day Registration",
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
        "value" : "\\u003Cp\\u003EThank you for your interest in the ILR School\\u2019s Saturday Visit Days program.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYou will receive an email confirmation shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions, please contact the Admissions Office at 607-255-2222 or ilr_admissions@cornell.edu.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EWe look forward to seeing you soon.\\u003C\\/p\\u003E\\r\\n",
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
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "ilradmissions@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['mps_nyc_have_more_questions'] = entity_import('entityform_type', '{
    "type" : "mps_nyc_have_more_questions",
    "label" : "Have Questions about MPS\\/NYC?",
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
        "value" : "\\u003Cp\\u003EThank you for your interest in the MPS program in New York City.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EPlease check below that your email address was entered correctly. You will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EMPS\\/NYC Program\\u003Cbr\\u003E\\r\\n\\tILR School\\u003Cbr\\u003E\\r\\n\\tCornell University\\u003Cbr\\u003E\\r\\n\\t\\u003Ca href=\\u0022mailto:mpsnyc@cornell.edu\\u0022\\u003Empsnyc@cornell.edu\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n",
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
      "form_submission_ilr_recipient" : "mpsnyc@cornell.edu"
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
  $items['wisp_student_application'] = entity_import('entityform_type', '{
    "type" : "wisp_student_application",
    "label" : "CEP Student Application",
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
      "submission_page_title" : "CEP Application Received",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for submitting an application for a CEP opportunity. You will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions, please contact the CEP coordinator at \\u003Ca href=\\u0022mailto:ilrocsexplore@cornell.edu\\u0022\\u003Eilrocsexplore@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EILR School Office of Career Services\\u003Cbr\\u003E\\r\\n\\tCornell University\\u003C\\/p\\u003E\\r\\n",
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
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 1,
      "form_submission_ilr_recipient" : "ilrocsexplore@cornell.edu",
      "add_payment_processing" : 0,
      "hpp" : ""
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
