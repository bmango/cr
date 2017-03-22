<?php
/**
 * @file
 * permission.administer_flags.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer flags',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'flag',
);
