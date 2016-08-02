<?php
/**
 * @file
 * permission.bypass_honeypot_protection.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'bypass honeypot protection',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'honeypot',
);
