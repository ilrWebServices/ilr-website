<?php
/**
 * @file
 * The template file for the certificate program block cta.
 */
?>

<div id="certificate-info-aside">
  <div class="get-started">
    <h2>Get Started</h2>

    <p>Register for individual workshops to fit your schedule</p>

    <p class="price">$<?php print $total_cost; ?></p>

    <div class="days-time">
      <p class="days-of-instruction"><em><?php print $course_count; ?></em>focused workshops</p>
      <p class="time-to-complete"><em>18</em>months to complete</p>
    </div>
  </div>

  <div class="contact">
    <p>We can notify you when new workshop dates are scheduled</p>
    <a class="button course follow" data-nid="<?php print $certificate_nid; ?>" alt="Follow courses in this certificate" title="Follow courses in this certificate">Notify Me<span class="course-title"><?php print $certificate_title; ?></span></a>
    <h3>Have questions? Contact us.</h3>

    <p><a href="mailto:ilrcustomerservice@cornell.edu">ilrcustomerservice@cornell.edu</a><br />
      (866) 470-1922</p>
  </div>
</div>
