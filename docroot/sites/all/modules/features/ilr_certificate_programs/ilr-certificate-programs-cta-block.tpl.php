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
      <p class="em-content"><em><?php print $course_count; ?></em>focused workshops</p>
      <p>Register for individual workshops to fit your schedule</p>
      <hr>
    </div>
    <div>
      <h3>Time to Complete</h3>
      <p class="em-content"><em>18</em>months</p>
      <p>Time participants have to complete the entire certificate program</p>
      <hr>
    </div>
    <div>
      <h3>Total Cost</h3>
      <p class="em-content"><em>$<?php print $total_cost; ?></em></p>
      <p>Pay for individual workshops as you go</p>
    </div>
  </div>

  <div class="get-updates">
    <div>
      <h2>Get Updates</h2>
      <p>Sign up for notification of new workshop dates</p>
    </div>
    <a class="button course follow" data-nid="<?php print $certificate_nid; ?>" alt="Sign me up for notifications of new courses in this certificate" title="Sign me up for notifications of new courses in this certificate">Sign Me Up<span class="course-title"><?php print $certificate_title; ?></span></a>
  </div>

  <div class="contact-us">
    <h2>Have Questions?</h2>
    <p>Have questions? Contact us.</p>
    <p><a href="">ilrcustomerservice@cornell.edu</a></p>
    <p>(866) 470-1922</p>
  </div>
