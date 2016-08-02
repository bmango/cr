<?php
/**
 * @file
 * permission.edit_any_message_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any message content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.message' => 'content_type.message',
);

$optional = array();

$modules = array(
  0 => 'node',
);
