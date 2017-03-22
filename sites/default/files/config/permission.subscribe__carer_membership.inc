<?php
/**
 * @file
 * permission.subscribe__carer_membership.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'subscribe: carer_membership',
  'roles' => array(),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'stripe_subscription',
);
