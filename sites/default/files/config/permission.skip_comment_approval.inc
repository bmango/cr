<?php
/**
 * @file
 * permission.skip_comment_approval.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'skip comment approval',
  'roles' => array(
    0 => 'authenticated user',
    1 => 'employer active',
    2 => 'editor',
    3 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'comment',
);
