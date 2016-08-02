<?php
/**
 * @file
 * variable.stripe_subscribe_notify_pmt_upcoming.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'stripe_subscribe_notify_pmt_upcoming',
  'content' => 'Dear [current-user:field-first-name-em] [current-user:field-last-name-em], 

This is a reminder email that your membership for [site:name] will renew in one week. 

You can cancel your membership at any time by visiting [site:url]subscription.

[site:name] Team',
);

$dependencies = array();

$optional = array();

$modules = array();
