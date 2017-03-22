<?php
/**
 * @file
 * permission.flag_favourite_jobs.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'flag favourite_jobs',
  'roles' => array(
    0 => 'carer',
    1 => 'carer active',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'flag',
);
