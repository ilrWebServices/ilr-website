<?php
/**
 * @file
 * The template file for the certificate program block cta.
 */
?>
  <div class="certificate-basics">
    <div>
      <h2>Certificate Basics</h2>
      <h3>Required Courses</h3>
      <p><strong><?php print $course_count; ?></strong> Focused workshops<br />
      Register for individual workshops to fit your schedule</p>
    </div>
    <div>
      <h3>Time to Complete</h3>
      <p><strong>18</strong> months<br />
      Time participants have to complete the entire certificate program</p>
    </div>
    <div>
      <h3>Total Cost</h3>
      <p><strong>$<?php print $total_cost; ?></strong><br />
      Pay for individual workshops as you go</p>
    </div>
  </div>

  <div class="get-updates">
    <div>
      <h2>Get Updates</h2>
      <p>Sign up for notification of new workshop dates</p>
    </div>
    <a class="button course follow" data-nid="<?php print $certificate_nid; ?>" alt="Sign me up for notifications of new courses in this certificate" title="Sign me up for notifications of new courses in this certificate">Sign Up<span class="course-title"> for notifications of <?php print $certificate_title; ?></span></a>
  </div>

  <div class="contact-us">
    <h2>Have Questions?</h2>
    <p>Contact us. <a href="">ilrcustomerservice@cornell.edu</a><br />
    (866) 470-1922</p>
  </div>
