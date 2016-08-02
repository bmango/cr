<?php
/**
 * @file
 * permission.edit_own_employer_profile.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own employer profile',
  'roles' => array(
    0 => 'employer',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'profile2',
);
