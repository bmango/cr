<?php
/**
 * @file
 * variable.user_mail_register_no_approval_required_body.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'user_mail_register_no_approval_required_body',
  'content' => 'Dear [current-user:profile-carer:field_first_name_em] [current-user:profile-carer:field_last_name_em],

Thank you for becoming a member of [site:name]. You may now log in at [site:login-url] using:

username: [user:name] (or your email address)
password: Your password

Your profile is now active. If you do not login within four weeks your profile will be automatically de-activated. You can always re-activate your profile by logging in and going to the edit profile section.

You can now contact employers on this site who have posted jobs using the contact employer button. Employers registered with this site will also be able to send you a message if they want to contact you about a job.

All your personal contact details will be kept hidden. Employers will be able to contact you using the Contact Carer button.

You will be sent an email every time an employer contacts you on the site.

You can deactivate your profile at any time in the edit profile section.

[site:name] team',
);

$dependencies = array();

$optional = array();

$modules = array();
