<?php
/**
 * @file
 * permission.view_own_agency_profile.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'view own agency profile',
  'roles' => array(
    0 => 'agency',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'profile2',
);
