<?php
/**
 * @file
 * permission.administer_profiles.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer profiles',
  'roles' => array(
    0 => 'editor',
    1 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'profile2',
);
