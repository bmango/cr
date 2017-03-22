<?php
/**
 * @file
 * permission.publish_button_publish_own_job.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'publish button publish own job',
  'roles' => array(
    0 => 'employer active',
    1 => 'agency bronze',
    2 => 'agency silver',
    3 => 'agency gold',
    4 => 'editor',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'publish_button',
);
