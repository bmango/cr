<?php
/**
 * @file
 * permission.manage_own_subscription.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'manage own subscription',
  'roles' => array(
    0 => 'anonymous user',
    1 => 'authenticated user',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'stripe_subscription',
);
