<?php
/**
 * @file
 * permission.exclude_from_message_filtering.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'exclude from message filtering',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'disable_messages',
);
