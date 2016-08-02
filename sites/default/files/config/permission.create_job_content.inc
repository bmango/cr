<?php
/**
 * @file
 * permission.create_job_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create job content',
  'roles' => array(
    0 => 'employer',
    1 => 'employer active',
    2 => 'agency bronze',
    3 => 'agency silver',
    4 => 'agency gold',
    5 => 'editor',
  ),
);

$dependencies = array(
  'content_type.job' => 'content_type.job',
);

$optional = array();

$modules = array(
  0 => 'node',
);
