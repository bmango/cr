<?php
/**
 * @file
 * permission.administer_stripe.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer stripe',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'stripe',
);
