<?php
/**
 * @file
 * permission.manipulate_queues.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'manipulate queues',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'nodequeue',
);
