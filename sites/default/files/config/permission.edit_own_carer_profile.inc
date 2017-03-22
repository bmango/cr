<?php
/**
 * @file
 * permission.edit_own_carer_profile.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own carer profile',
  'roles' => array(
    0 => 'carer',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'profile2',
);
