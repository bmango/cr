<?php
/**
 * @file
 * permission.manage_any_subscription.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'manage any subscription',
  'roles' => array(),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'stripe_subscription',
);
