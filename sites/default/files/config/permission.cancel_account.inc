<?php
/**
 * @file
 * permission.cancel_account.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'cancel account',
  'roles' => array(
    0 => 'employer',
    1 => 'employer active',
    2 => 'carer',
    3 => 'agency',
    4 => 'editor',
    5 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'user',
);
