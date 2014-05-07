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
  $items['career_services_contact_form'] = entity_import('entityform_type', '{
    "type" : "career_services_contact_form",
    "label" : "Career Services Contact Form",
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
        "value" : "\\u003Cp\\u003EThank you for submitting your questions\\/comments to ILR Career Services.\\u003C\\/p\\u003E\\r\\n",
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
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "form_submission_ilr_recipient" : "",
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
        "6" : 0,
        "5" : 0,
        "7" : 0,
        "8" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "form_submission_ilr_recipient" : "bk30@cornell.edu",
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['faculty_request_for_ta_or_ra'] = entity_import('entityform_type', '{
    "type" : "faculty_request_for_ta_or_ra",
    "label" : "Faculty request for TA or RA",
    "data" : {
      "draftable" : 0,
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
        "6" : 0,
        "5" : 0,
        "7" : 0,
        "8" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003ETo be completed by the faculty member requesting a graduate assistant.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EPlease complete a separate form for each class or project for which you are requesting TAs or RAs.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "form_submission_ilr_recipient" : "ilrgradforms@cornell.edu",
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
        "value" : "\\u003Cp\\u003EYou have successfully submitted an applicaton for a student teaching\\/research assistantship to the ILR Graduate Program. An email confirmation will be sent to the email address listed below.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions about your submission, please contact the Graduate Degree Programs office at 607-255-1522 or \\u003Ca href=\\u0022mailto:ilrgradforms@cornell.edu\\u0022\\u003Eilrgradforms@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThank you for your interest.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EILR Graduate Degree Programs, Cornell University\\u003C\\/p\\u003E\\r\\n",
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
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "form_submission_ilr_recipient" : "ilrgradforms@cornell.edu",
      "add_user_name_to_subject_line" : 1,
      "kerberized" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['ilr_organizational_behavior_lab_'] = entity_import('entityform_type', '{
    "type" : "ilr_organizational_behavior_lab_",
    "label" : "ILR Organizational Behavior Lab - ExPO Contact Form",
    "data" : {
      "draftable" : 0,
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
        "6" : 0,
        "5" : 0,
        "7" : 0,
        "8" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "form_submission_ilr_recipient" : "jag97@cornell.edu",
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
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
        "9" : 0,
        "6" : 0,
        "5" : 0,
        "7" : 0,
        "8" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "block_enable" : true,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "ilrweb@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['international_programs_contact_f'] = entity_import('entityform_type', '{
    "type" : "international_programs_contact_f",
    "label" : "International Programs Contact Form",
    "data" : {
      "draftable" : 0,
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
        "value" : "\\u003Cp\\u003EThank you for your comments and questions.\\u003C\\/p\\u003E\\r\\n",
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
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "form_submission_ilr_recipient" : "ilrip@cornell.edu"
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
        "value" : "\\u003Ch3\\u003EThank you\\u003C\\/h3\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYour questions and comments have been sent to ILR Student Services.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EOffice of Student Services, ILR School, Cornell University\\u003Cbr \\/\\u003E\\r\\n\\t\\u003Ca href=\\u0022mailto:ilr_oss@cornell.edu\\u0022\\u003Eilr_oss@cornell.edu\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n",
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
        "9" : 0,
        "6" : 0,
        "5" : 0,
        "7" : 0,
        "8" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "block_enable" : true,
      "kerberized" : 0,
      "form_submission_ilr_recipient" : "ilr_oss@cornell.edu"
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['worker_institute_contact_form'] = entity_import('entityform_type', '{
    "type" : "worker_institute_contact_form",
    "label" : "Worker Institute Contact Form",
    "data" : {
      "draftable" : 0,
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
        "value" : "\\u003Cp\\u003EThank you for your feedback about the Worker Institute.\\u003C\\/p\\u003E\\r\\n",
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
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EWe welcome your feedback. All correspondence is held in strict confidentiality.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "form_submission_ilr_recipient" : "workerInstitute@cornell.edu",
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
