<?php
/**
 * @file
 * permission.view_any_agency_profile.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'view any agency profile',
  'roles' => array(
    0 => 'employer',
    1 => 'carer',
    2 => 'agency',
    3 => 'editor',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'profile2',
);
