<?php
/**
 * @file
 * permission.display_eu_cookie_compliance_popup.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'display EU Cookie Compliance popup',
  'roles' => array(
    0 => 'anonymous user',
    1 => 'authenticated user',
    2 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'eu_cookie_compliance',
);
