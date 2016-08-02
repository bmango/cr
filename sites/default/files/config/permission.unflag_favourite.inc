<?php
/**
 * @file
 * permission.unflag_favourite.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'unflag favourite',
  'roles' => array(
    0 => 'employer',
    1 => 'employer active',
    2 => 'editor',
    3 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'flag',
);
