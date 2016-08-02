<?php
/**
 * @file
 * permission.edit_own_main_profile.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own main profile',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'profile2',
);
