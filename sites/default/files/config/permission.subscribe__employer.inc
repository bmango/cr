<?php
/**
 * @file
 * permission.subscribe__employer.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'subscribe: employer',
  'roles' => array(),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'stripe_subscription',
);
