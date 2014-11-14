<?php
/**
 * @file
 * forms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forms_ctools_plugin_api($module = NULL, $api = NULL) {
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
function forms_default_entityform_type() {
  $items = array();
  $items['alumni_enews_subscribe'] = entity_import('entityform_type', '{
    "type" : "alumni_enews_subscribe",
    "label" : "ILR Alumni and Friends Newsletter Subscription",
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
        "value" : "\\u003Cp\\u003EYour ILR Alumni and Friends Newsletter subscription status has been updated.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EILR Alumni\\u003Cbr \\/\\u003E\\r\\n\\tCornell University\\u003Cbr \\/\\u003E\\r\\n\\tss446@cornell.edu@cornell.edu\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "3" : "3",
        "1" : "1",
        "2" : "2",
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 0,
      "form_submission_ilr_recipient" : "ss446@cornell.edu",
      "send_confirmation_email_to_admin" : 0,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['career_services_contact_form'] = entity_import('entityform_type', '{
    "type" : "career_services_contact_form",
    "label" : "Career Services Contact Form",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
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
        "value" : "\\u003Cp\\u003EThank you for contacting ILR Career Services.\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['classroom_reservation_request'] = entity_import('entityform_type', '{
    "type" : "classroom_reservation_request",
    "label" : "Classroom Reservation Request",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "You will receive a confirmation email.  Be sure to read the additional requirements related to \\u0022technical needs.\\u0022",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for requesting an ILR classroom reservation. You will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThe information you submitted appears below.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf there are technical needs, training is required prior to the use of a room. Please contact ILR Technology Services to make these arrangements via email at: ilrvtc@cornell.edu.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EAdditional information about the classrooms in the Ives Hall Classroom Building:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cul\\u003E\\r\\n\\t\\u003Cli\\u003E\\u003Ca href=\\u0022http:\\/\\/www.ilr.cornell.edu\\/techServices\\/services\\/distanceLearning\\/dlrooms.html\\u0022\\u003EDistance Learning Rooms\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\t\\u003Cli\\u003E\\u003Ca href=\\u0022http:\\/\\/www.ilr.cornell.edu\\/techServices\\/services\\/classroomTechnologies\\/classroom.html\\u0022\\u003EClassrooms\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003C\\/ul\\u003E\\r\\n\\r\\n\\u003Cp\\u003ENote: ILR Technology Services does not support Skype in the classrooms. If using Skype, please use your own laptop.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003EContact Information\\u003C\\/strong\\u003E\\u003Cbr \\/\\u003E\\r\\n\\tILR School\\u003Cbr \\/\\u003E\\r\\n\\tOffice of Student Services\\u003Cbr \\/\\u003E\\r\\n\\t101 Ives Hall\\u003Cbr \\/\\u003E\\r\\n\\t(607) 255-1515\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "ilrossreservations@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['classroom_technologies_request'] = entity_import('entityform_type', '{
    "type" : "classroom_technologies_request",
    "label" : "Classroom Technologies Request",
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
      "submission_page_title" : "Classroom Technologies Request Confirmation",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EYour request has been submitted to ILR Technology Services. You will receive an automated email confirmation of your request shortly.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "3" : "3",
        "1" : "1",
        "2" : "2",
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 0,
      "form_submission_ilr_recipient" : "",
      "send_confirmation_email_to_admin" : 0,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['collective_bargaining_videos'] = entity_import('entityform_type', '{
    "type" : "collective_bargaining_videos",
    "label" : "Collective Bargaining Training Videos",
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
        "value" : "\\u003Cp\\u003EThis shouldn\\u0026#39;t appear if the redirect is working right.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "3" : "3",
        "1" : "1",
        "2" : "2",
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 0,
      "form_submission_ilr_recipient" : "kam47@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['contact_ilr_admissions'] = entity_import('entityform_type', '{
    "type" : "contact_ilr_admissions",
    "label" : "Contact ILR Admissions",
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
        "value" : "\\u003Cp\\u003EThank you for contacting ILR Undergraduate Admissions.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYou will receive an email confirmation shortly. If you requested printed materials, you can expect to receive them within a week.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions, please contact the Admissions Office at 607-255-2222 or ilr_admissions@cornell.edu.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThank you for your interest in the ILR School.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "3" : "3",
        "1" : "1",
        "2" : "2",
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "ilr_admissions@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['credit_internship_contact_form'] = entity_import('entityform_type', '{
    "type" : "credit_internship_contact_form",
    "label" : "Credit Internship Contact Form",
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
        "value" : "\\u003Cp\\u003EThank you for your interest in the ILR Credit Internship Program. If you have any questions, please contact us:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EILR Off-Campus Credit Programs\\u003Cbr \\/\\u003E\\r\\n\\t119 Ives Hall\\u003Cbr \\/\\u003E\\r\\n\\tILR School\\u003Cbr \\/\\u003E\\r\\n\\tCornell University\\u003Cbr \\/\\u003E\\r\\n\\tIthaca, NY 14853\\u003Cbr \\/\\u003E\\r\\n\\t(607) 255-2266\\u003Cbr \\/\\u003E\\r\\n\\tbk30@cornell.edu\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "bk30@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['customized_professional_programs'] = entity_import('entityform_type', '{
    "type" : "customized_professional_programs",
    "label" : "Customized Professional Programs",
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
        "value" : "\\u003Cp\\u003EThank you for contacting ILR Customized Professional Programs.\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "ilrCustomerService@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['desktop_support_request'] = entity_import('entityform_type', '{
    "type" : "desktop_support_request",
    "label" : "Desktop Support Request",
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
      "submission_page_title" : "Desktop Support Request Confirmation",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EYour request has been submitted to ILR Technology Services. You will receive an automated email confirmation of your request shortly.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "3" : "3",
        "1" : "1",
        "2" : "2",
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 0,
      "form_submission_ilr_recipient" : "",
      "send_confirmation_email_to_admin" : 0,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['distance_learning_reservation_re'] = entity_import('entityform_type', '{
    "type" : "distance_learning_reservation_re",
    "label" : "Distance Learning Reservation Request",
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
      "submission_page_title" : "Distance Learning Reservation Request Confirmation",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for submitting your Distance Learning Reservation to the ILR Video Conferencing team. You will receive an email confirmation shortly.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "3" : "3",
        "1" : "1",
        "2" : "2",
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "ilrvtc@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['dublin_application_form'] = entity_import('entityform_type', '{
    "type" : "dublin_application_form",
    "label" : "Dublin Application Form",
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
        "value" : "\\u003Cp\\u003EThank you for applying to the ILR\\/UCD Semester in Dublin. Your application has been submitted, and you will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "bk30@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['employee_recognition_nomination_'] = entity_import('entityform_type', '{
    "type" : "employee_recognition_nomination_",
    "label" : "Employee Recognition Nomination Form",
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
        "value" : "\\u003Ch3\\u003EThank you\\u003C\\/h3\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThank you for submitting a nomination for the employee recognition award. If you have any further questions or concerns, please contact Theresa Woodhouse by email at \\u003Ca href=\\u0022mailto:thw3@cornell.edu\\u0022\\u003Ethw3@cornell.edu\\u003C\\/a\\u003E or by phone at 607-255-5028.\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "thw3@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['faculty_request_for_ta_or_ra'] = entity_import('entityform_type', '{
    "type" : "faculty_request_for_ta_or_ra",
    "label" : "Faculty request for TA or RA",
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
        "value" : "\\u003Cp\\u003EYou have succesfully submitted a request for one or more graduate student assistants.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThe information you submitted has been sent to the program coordinator.\\u0026nbsp; You will receive an email confirmation shortly.\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "ilrgradforms@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['grad_student_appl_for_graduation'] = entity_import('entityform_type', '{
    "type" : "grad_student_appl_for_graduation",
    "label" : "Graduate Student Application for Graduation",
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
        "value" : "\\u003Ch2\\u003EILR Graduate Student Application for Graduation\\u003C\\/h2\\u003E\\r\\n\\r\\n\\u003Ch3\\u003EYour application has been submitted.\\u003C\\/h3\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThank you for submitting your application for graduation.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EPlease stop by the ILR Graduate Programs Office to pick up your commencement packet. These packets contain severe weather tickets and other important information. For additional information about commencement please visit \\u003Ca href=\\u0022http:\\/\\/commencement.cornell.edu\\/\\u0022\\u003Ehttp:\\/\\/commencement.cornell.edu\\/\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions or concerns about your application, please email the ILR Graduate Programs Office at: \\u003Ca href=\\u0022mailto:mjk53@cornell.edu\\u0022\\u003Emjk53@cornell.edu\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "mjk53@cornell.edu",
      "send_confirmation_email_to_admin" : 0,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['grad_travel_grant_application'] = entity_import('entityform_type', '{
    "type" : "grad_travel_grant_application",
    "label" : "ILR Travel Grant Application for MS\\/PhD Students",
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
        "value" : "\\u003Ch3\\u003EILR Travel Grant Application Confirmation\\u003C\\/h3\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYou have successfully submitted a graduate student travel grant application.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThe information you submitted has been sent to the program coordinator. You will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions about your submission, please contact the Graduate Degree Programs office at 607-255-1522 or ilrgradforms@cornell.edu.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThank you for your interest.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EILR Graduate Degree Programs, Cornell University\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "ilrgradforms@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['graduate_student_request_for_tea'] = entity_import('entityform_type', '{
    "type" : "graduate_student_request_for_tea",
    "label" : "Graduate Student Request for Teaching\\/Research Assistantship",
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
        "value" : "\\u003Cp\\u003EYou have successfully submitted an applicaton for a student teaching\\/research assistantship to the ILR Graduate Program. You will receive an email confirmation shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions about your submission, please contact the Graduate Degree Programs office at 607-255-1522 or \\u003Ca href=\\u0022mailto:ilrgradforms@cornell.edu\\u0022\\u003Eilrgradforms@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThank you for your interest.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EILR Graduate Degree Programs, Cornell University\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "ilrgradforms@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['groat_faculty_staff_registration'] = entity_import('entityform_type', '{
    "type" : "groat_faculty_staff_registration",
    "label" : "Groat Faculty\\/Staff Registration",
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
        "value" : "\\u003Cp\\u003E\\u003Cstrong\\u003ERequest to Attend Groat has been Submitted\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYou have submitted a request to the ILR Alumni group to register to attend the Groat Alpern awards ceremony. You will receive a confirmation email when your registration has been entered.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions or if you need to cancel your registration, please contact Sue Sappington, \\u003Ca href=\\u0022mailto:ss446@cornell.edu\\u0022\\u003Ess446@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "3" : "3",
        "1" : "1",
        "2" : "2",
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 0,
      "form_submission_ilr_recipient" : "ss446@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['groat_student_registration'] = entity_import('entityform_type', '{
    "type" : "groat_student_registration",
    "label" : "Groat Student Registration",
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
        "value" : "\\u003Cp\\u003E\\u003Cstrong\\u003ERequest to Attend Groat has been Submitted\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYou have submitted a request to the ILR Alumni group to register to attend the Groat Alpern awards ceremony. You will receive a confirmation email when your registration is entered.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions or if you need to cancel your registration, please contact Sue Sappington, \\u003Ca href=\\u0022mailto:ss446@cornell.edu\\u0022 target=\\u0022_blank\\u0022\\u003Ess446@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "3" : "3",
        "1" : "1",
        "2" : "2",
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 0,
      "form_submission_ilr_recipient" : "ss446@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['ilr_alumni_association_event_reg'] = entity_import('entityform_type', '{
    "type" : "ilr_alumni_association_event_reg",
    "label" : "ILR Alumni Association Event Registration",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "alumni\\/events\\/registration",
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
        "value" : "\\u003Cp\\u003E\\u003Cstrong\\u003EAlumni Event Registration Confirmation\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThank you for your registration. You will receive an email confirmation shortly. If you have any questions, please contact Sue Sappington in the Alumni Affairs Development Office, \\u003Ca href=\\u0022mailto:ss446@cornell.edu\\u0022\\u003Ess446@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EEvent Details:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[entityform:event_info]\\u003C\\/p\\u003E\\r\\n",
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
        "26" : 0,
        "21" : 0,
        "31" : 0,
        "36" : 0,
        "46" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "alumni\\/events\\/registration",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "ilralumniassociation@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['ilr_information_session_sign_in'] = entity_import('entityform_type', '{
    "type" : "ilr_information_session_sign_in",
    "label" : "ILR Information Session Sign-In",
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
      "submission_page_title" : "ILR Information Session Sign-In",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for signing in for your ILR Undergraduate Admissions Information Session.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "3" : "3",
        "1" : "1",
        "2" : "2",
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "form_submission_ilr_recipient" : "ilr_admissions@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['ilr_organizational_behavior_lab_'] = entity_import('entityform_type', '{
    "type" : "ilr_organizational_behavior_lab_",
    "label" : "ILR Organizational Behavior Lab - ExPO Contact Form",
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
        "value" : "\\u003Cp\\u003EThank you for your feedback.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EILR Organizational Behavior Lab - ExPO\\u003Cbr \\/\\u003E\\r\\n\\t\\u003Ca href=\\u0022http:\\/\\/www.ilr.cornell.edu\\/expo\\/\\u0022\\u003Ehttp:\\/\\/www.ilr.cornell.edu\\/expo\\/\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "jag97@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['ilr_student_advisor_application_'] = entity_import('entityform_type', '{
    "type" : "ilr_student_advisor_application_",
    "label" : "ILR Student Advisor Application Form",
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
      "submission_page_title" : "ILR Student Advisor Application Confirmation",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for applying to be an ILR student advisor. Your application has been submitted, and you will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "ilr_oss@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['ilr_website_feedback'] = entity_import('entityform_type', '{
    "type" : "ilr_website_feedback",
    "label" : "ILR Website Feedback",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "ilrweb@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['international_programs_contact_f'] = entity_import('entityform_type', '{
    "type" : "international_programs_contact_f",
    "label" : "International Programs Contact Form",
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
        "value" : "\\u003Cp\\u003EThank you for contacting ILR International Programs.\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "ilrip@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['join_the_hcd_mailing_list'] = entity_import('entityform_type', '{
    "type" : "join_the_hcd_mailing_list",
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
      "submission_page_title" : "",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for requesting to be added to Cornell ILR\\u0026#39;s Human Capital Development mailing list. Our training programs help you to gain skills that make an impact in the workplace. We appreciate your interest in Cornell and hope to welcome you to one of our programs in the near future.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have questions, please send email to \\u003Ca href=\\u0022mailto:ilrcustomerservice@cornell.edu\\u0022\\u003EILR Customer Service\\u003C\\/a\\u003E or call us at 866-470-1922.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ECornell University\\u003Cbr \\/\\u003E\\r\\n\\tILR School\\u003Cbr \\/\\u003E\\r\\n\\tHuman Capital Development\\u003Cbr \\/\\u003E\\r\\n\\t16 East 34th Street\\u003Cbr \\/\\u003E\\r\\n\\tNew York, NY 10016-4328\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "ilrcustomerservice@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['labor_roundtable_student_registr'] = entity_import('entityform_type', '{
    "type" : "labor_roundtable_student_registr",
    "label" : "Labor Roundtable Student Registration",
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
        "value" : "\\u003Cp\\u003E\\u003Cstrong\\u003ELabor Roundtable Registration Confirmation\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThank you for registering for the Labor Roundtable. You will receive an email confirmation shortly. If you have any questions, please contact the ILR Office of Career Services, \\u003Ca href=\\u0022mailto:laborRoundtable@cornell.edu\\u0022\\u003ElaborRoundtable@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EEvent Details:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[entityform:event_info]\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "laborRoundtable@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['library_contact_form'] = entity_import('entityform_type', '{
    "type" : "library_contact_form",
    "label" : "Library Contact Form",
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
        "value" : "\\u003Cp\\u003EThank you for your Catherwood Library feedback.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ECatherwood Library\\u003Cbr \\/\\u003E\\r\\n\\tILR School\\u003Cbr \\/\\u003E\\r\\n\\tCornell University\\u003Cbr \\/\\u003E\\r\\n\\tilrlib@cornell.edu\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "ilrlib@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['request_faculty_advisor_or_depar'] = entity_import('entityform_type', '{
    "type" : "request_faculty_advisor_or_depar",
    "label" : "Request Faculty Advisor or Department",
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
        "value" : "\\u003Cp\\u003EThank you for submitting your request for a faculty advisor or department. You will receive a confirmation email shortly.\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "ilr_oss@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['scheinman_mailing_list'] = entity_import('entityform_type', '{
    "type" : "scheinman_mailing_list",
    "label" : "Join the Scheinman Institute Mailing List",
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
        "value" : "\\u003Cp\\u003EThank you for requesting to join the Scheinman Institute mailing list. If you have any questions, please contact us:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EScheinman Institute on Conflict Resolution\\u003Cbr \\/\\u003E\\r\\n\\tILR Extension Building\\u003Cbr \\/\\u003E\\r\\n\\tCornell University\\u003Cbr \\/\\u003E\\r\\n\\tIthaca, NY 14853-3901\\u003Cbr \\/\\u003E\\r\\n\\t607-255-9298\\u003Cbr \\/\\u003E\\r\\n\\tilrcr@cornell.edu\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "ilrcr@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['student_services_contact_form'] = entity_import('entityform_type', '{
    "type" : "student_services_contact_form",
    "label" : "Student Services Contact Form",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
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
        "value" : "\\u003Cp\\u003EThank you for contacting ILR Student Services.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EOffice of Student Services, ILR School, Cornell University\\u003Cbr \\/\\u003E\\r\\n\\t\\u003Ca href=\\u0022mailto:ilr_oss@cornell.edu\\u0022\\u003Eilr_oss@cornell.edu\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "ilr_oss@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['undergrad_appl_for_graduation'] = entity_import('entityform_type', '{
    "type" : "undergrad_appl_for_graduation",
    "label" : "Undergraduate Application for Graduation",
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
        "value" : "\\u003Ch2\\u003EILR Undergraduate Student Application for Graduation\\u003C\\/h2\\u003E\\r\\n\\r\\n\\u003Ch3\\u003EYour application has been submitted.\\u003C\\/h3\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThank you for submitting your application for graduation. Your diploma will be mailed to your home address as listed in Student Center. Please make sure your address is listed correctly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf the name you requested for your diploma does not match your name in Student Center, please visit B7 Day Hall to have it officially changed.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions or concerns about your application, please email the ILR College Registrar at: \\u003Ca href=\\u0022mailto:mjk53@cornell.edu\\u0022\\u003Eilr_registrar@cornell.edu\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "ilr_registrar@cornell.edu",
      "send_confirmation_email_to_admin" : 0,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['wit_email_list_subscribe'] = entity_import('entityform_type', '{
    "type" : "wit_email_list_subscribe",
    "label" : "WIT Email List Subscribe",
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
        "value" : "\\u003Cp\\u003EYour WIT subscription status has been updated. If you subscribed, your subscription will begin with the next published issue.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ECatherwood Library Reference Staff\\u003Cbr \\/\\u003E\\r\\nILR School\\u003Cbr \\/\\u003E\\r\\nCornell University\\u003Cbr\\u003E\\r\\ncatherwoodWIT@cornell.edu\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "3" : "3",
        "1" : "1",
        "2" : "2",
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "catherwoodWIT@cornell.edu",
      "send_confirmation_email_to_admin" : 0,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['worker_institute_contact_form'] = entity_import('entityform_type', '{
    "type" : "worker_institute_contact_form",
    "label" : "Worker Institute Contact Form",
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
        "value" : "\\u003Cp\\u003EThank you for contacting the Worker Institute at Cornell University.\\u003C\\/p\\u003E\\r\\n",
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
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "10" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "send_confirmation_email_to_user" : 1,
      "form_submission_ilr_recipient" : "workerInstitute@cornell.edu",
      "send_confirmation_email_to_admin" : 1,
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
