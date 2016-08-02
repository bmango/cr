<?php
/**
 * @file
 * variable.stripe_subscribe_notify_pmt_success.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'stripe_subscribe_notify_pmt_success',
  'content' => 'Dear [current-user:field-first-name-em] [current-user:field-last-name-em],

Thank you for your payment of [stripe-subscription:amount] for [stripe-subscription:plan].

Your membership will renew in [stripe-subscription:days-to-renewal] days. You will be sent a reminder email about your upcoming subscription renewal seven days before it renews. You can cancel at anytime by going to [stripe-subscription:subscription-url]. Please note that when you cancel your membership is cancelled at the same time, although your registration details will remain on the system, and so will still be able to login.

Please contact us at [site:mail] if you have any questions about your membership.

Kind regards,

[site:name] team',
);

$dependencies = array();

$optional = array();

$modules = array();
