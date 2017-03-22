<?php
/**
 * @file
 * permission.view_terms_and_conditions.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'view Terms and Conditions',
  'roles' => array(
    0 => 'anonymous user',
    1 => 'authenticated user',
    2 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'legal',
);
