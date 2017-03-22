<?php
/**
 * @file
 * permission.view_any_carer_profile.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'view any carer profile',
  'roles' => array(
    0 => 'employer active',
    1 => 'carer active',
    2 => 'agency',
    3 => 'editor',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'profile2',
);
