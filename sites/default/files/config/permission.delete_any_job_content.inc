<?php
/**
 * @file
 * permission.delete_any_job_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any job content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.job' => 'content_type.job',
);

$optional = array();

$modules = array(
  0 => 'node',
);
