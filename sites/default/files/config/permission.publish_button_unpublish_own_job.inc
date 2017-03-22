<?php
/**
 * @file
 * permission.publish_button_unpublish_own_job.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'publish button unpublish own job',
  'roles' => array(
    0 => 'employer active',
    1 => 'agency',
    2 => 'editor',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'publish_button',
);
