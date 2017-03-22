<?php
/**
 * @file
 * permission.flag_new.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'flag new',
  'roles' => array(
    0 => 'employer',
    1 => 'carer',
    2 => 'agency',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'flag',
);
