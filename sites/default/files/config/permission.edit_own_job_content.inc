<?php
/**
 * @file
 * permission.edit_own_job_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own job content',
  'roles' => array(
    0 => 'employer',
    1 => 'employer active',
    2 => 'agency',
    3 => 'agency bronze',
    4 => 'agency silver',
    5 => 'agency gold',
    6 => 'editor',
  ),
);

$dependencies = array(
  'content_type.job' => 'content_type.job',
);

$optional = array();

$modules = array(
  0 => 'node',
);
