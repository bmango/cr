<?php
/**
 * @file
 * permission.access_comments.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'access comments',
  'roles' => array(
    0 => 'authenticated user',
    1 => 'employer',
    2 => 'employer active',
    3 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'comment',
);
