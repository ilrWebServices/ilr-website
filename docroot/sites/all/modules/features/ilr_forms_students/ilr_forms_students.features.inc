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
    "label" : "Alumni Association Board Interest",
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
        "value" : "\\u003Cp\\u003EThank you for your interest in running for the ILR Alumni Association Board.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThe next step is to fill out the \\u003Ca href=\\u0022https:\\/\\/www.ilr.cornell.edu\\/ilraa-nomination-full-form\\u0022\\u003Efull nomination form\\u003C\\/a\\u003E. You will receive a confirmation email shortly, which will also include this link.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions, please contact Sue Sappington, \\u003Ca href=\\u0022mailto:ss446@cornell.edu\\u0022\\u003Ess446@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E",
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
      "form_submission_ilr_recipient" : "ss446@cornell.edu"
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
      "kerberized" : 1,
      "add_payment_processing" : 0,
      "form_submission_ilr_recipient" : "ss446@cornell.edu"
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
  $items['conversations_alumni_finance'] = entity_import('entityform_type', '{
    "type" : "conversations_alumni_finance",
    "label" : "Conversations with Alumni in Finance",
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
        "value" : "\\u003Cp\\u003EThank you for registering for the ILR Alumni event \\u0022Conversations with Alumni in Finance\\u0022 with Peter Rogers \\u002786 and Eric Hage \\u002786. You will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EDate: Monday, April 18, 2016\\u003Cbr\\u003E\\r\\n\\tTime: 4:30 PM\\u003Cbr\\u003E\\r\\n\\tLocation: Doherty Lounge, 281 Ives Faculty Building\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions, please contact Sue Sappington, \\u003Ca href=\\u0022mailto:ss446@cornell.edu\\u0022\\u003Ess446@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n",
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
      "form_submission_ilr_recipient" : "ss446@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['fex_student_application'] = entity_import('entityform_type', '{
    "type" : "fex_student_application",
    "label" : "FEX Student Application",
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
      "submission_page_title" : "FEX Application Received",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for submitting an application for a FEX opportunity. You will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions, please contact the FEX coordinator at \\u003Ca href=\\u0022mailto:ilrfex@cornell.edu\\u0022\\u003Eilrfex@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EILR School Office of Career Services\\u003Cbr\\u003E\\r\\n\\tCornell University\\u003C\\/p\\u003E\\r\\n",
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
      "kerberized" : 1,
      "add_payment_processing" : 0,
      "form_submission_ilr_recipient" : "ilrfex@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['fex_wisp_sponsor_registration'] = entity_import('entityform_type', '{
    "type" : "fex_wisp_sponsor_registration",
    "label" : "FEX\\/WISP Sponsor Registration",
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
        "value" : "\\u003Cp\\u003EThank you for your participation in the FEX\\/WISP Program. You will receive a confirmation email containing full details of your sponsorship.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions, please contact ILR Career Services.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EOffice of Career Services\\u003Cbr\\u003E\\r\\n\\tILR School\\u003Cbr\\u003E\\r\\n\\tCornell University\\u003Cbr\\u003E\\r\\n\\t(607) 255-0836\\u003Cbr\\u003E\\r\\n\\tFEX: \\u003Ca href=\\u0022mailto:ilrfex@cornell.edu\\u0022\\u003Eilrfex@cornell.edu\\u003C\\/a\\u003E\\u003Cbr\\u003E\\r\\n\\tWISP: \\u003Ca href=\\u0022mailto:ilrwisp@cornell.edu\\u0022\\u003Eilrwisp@cornell.edu\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n",
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
      "form_submission_ilr_recipient" : "ilrfex@cornell.edu"
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
        "value" : "\\u003Cp\\u003EThank you for your interest in attending our open house and learning more about Cornell ILR\\u0027s part-time MPS program in NYC. Please check below that your email address was entered correctly. You will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EQuestions: \\u003Ca href=\\u0022mailto:mpsnyc@cornell.edu\\u0022\\u003Empsnyc@cornell.edu\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[entityform:event_info]\\u003C\\/p\\u003E\\r\\n",
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
      "form_submission_ilr_recipient" : "mpsnyc@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['keith_strudler_lecture'] = entity_import('entityform_type', '{
    "type" : "keith_strudler_lecture",
    "label" : "Keith Strudler Lecture Registration",
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
        "value" : "\\u003Cp\\u003EThank you for registering for the Keith Strudler lecture. You will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EEvent Details:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[entityform:event_info]\\u003C\\/p\\u003E\\r\\n",
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
      "resubmit_action" : "disallow",
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
    "label" : "WISP Student Application",
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
      "submission_page_title" : "WISP Application Received",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for submitting an application for a WISP opportunity. You will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions, please contact the WISP coordinator at \\u003Ca href=\\u0022mailto:ilrwisp@cornell.edu\\u0022\\u003Eilrwisp@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EILR School Office of Career Services\\u003Cbr\\u003E\\r\\n\\tCornell University\\u003C\\/p\\u003E\\r\\n",
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
      "kerberized" : 1,
      "add_payment_processing" : 0,
      "form_submission_ilr_recipient" : "ilrwisp@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
