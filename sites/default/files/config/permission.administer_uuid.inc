<?php
/**
 * @file
 * permission.administer_uuid.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer uuid',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'uuid',
);
