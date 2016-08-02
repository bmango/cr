<?php
/**
 * @file
 * permission.delete_own_job_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own job content',
  'roles' => array(
    0 => 'agency',
    1 => 'agency bronze',
    2 => 'agency silver',
    3 => 'agency gold',
  ),
);

$dependencies = array(
  'content_type.job' => 'content_type.job',
);

$optional = array();

$modules = array(
  0 => 'node',
);
