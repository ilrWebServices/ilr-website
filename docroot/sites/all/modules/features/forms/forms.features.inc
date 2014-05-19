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
        "6" : 0,
        "5" : 0,
        "7" : 0,
        "8" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "block_enable" : true,
      "form_submission_ilr_recipient" : "",
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
        "6" : 0,
        "5" : 0,
        "7" : 0,
        "8" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Ch3\\u003EFor event, meeting and review session use only; not regular classes\\u003C\\/h3\\u003E\\r\\n\\r\\n\\u003Cp\\u003EOnly ILR departments and ILR Student Organizations may reserve classroom space in ILR due to space limitations. Thank you for your understanding and cooperation.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EWe will do our best to accommodate your request, but we cannot guarantee a space will be available. You will be notified via email as soon as possible whether or not a space can or cannot be reserved.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EAdditional information about the classrooms in the Ives Hall Classroom Building:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cul\\u003E\\r\\n\\t\\u003Cli\\u003E\\u003Ca href=\\u0022http:\\/\\/www.ilr.cornell.edu\\/techServices\\/services\\/distanceLearning\\/dlrooms.html\\u0022\\u003EDistance Learning Rooms\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\t\\u003Cli\\u003E\\u003Ca href=\\u0022http:\\/\\/www.ilr.cornell.edu\\/techServices\\/services\\/classroomTechnologies\\/classroom.html\\u0022\\u003EClassrooms\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003C\\/ul\\u003E\\r\\n",
        "format" : "full_html"
      },
      "block_enable" : true,
      "form_submission_ilr_recipient" : "ilrossreservations@cornell.edu",
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 1
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
      "block_enable" : true,
      "form_submission_ilr_recipient" : "bk30@cornell.edu",
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
        "value" : "\\u003Cp\\u003EThank you for your interest in ILR customized professional programs. You will receive an email confirmation shortly.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EWe will respond to your request within three business days. If you have questions, please contact us at \\u003Ca href=\\u0022mailto:ilrCustomerService@cornell.edu\\u0022\\u003EilrCustomerService@cornell.edu\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n",
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
        "value" : "\\u003Cp\\u003ETell us what kind of program you\\u0026#39;re looking for.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "form_submission_ilr_recipient" : "ilrCustomerService@cornell.edu",
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
      "block_enable" : true,
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
      "block_enable" : true,
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
      "block_enable" : true,
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
        "6" : 0,
        "5" : 0,
        "7" : 0,
        "8" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "block_enable" : true,
      "form_submission_ilr_recipient" : "ilrip@cornell.edu",
      "add_user_name_to_subject_line" : 0,
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
        "6" : 0,
        "5" : 0,
        "7" : 0,
        "8" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "block_enable" : true,
      "form_submission_ilr_recipient" : "ilr_oss@cornell.edu",
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
      "block_enable" : true,
      "form_submission_ilr_recipient" : "workerInstitute@cornell.edu",
      "add_user_name_to_subject_line" : 0,
      "kerberized" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
