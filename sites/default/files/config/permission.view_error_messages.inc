<?php
/**
 * @file
 * permission.view_error_messages.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'view error messages',
  'roles' => array(
    0 => 'anonymous user',
    1 => 'authenticated user',
    2 => 'employer',
    3 => 'employer active',
    4 => 'carer',
    5 => 'carer active',
    6 => 'agency',
    7 => 'editor',
    8 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'disable_messages',
);
