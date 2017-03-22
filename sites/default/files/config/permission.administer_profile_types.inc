<?php
/**
 * @file
 * permission.administer_profile_types.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer profile types',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'profile2',
);
