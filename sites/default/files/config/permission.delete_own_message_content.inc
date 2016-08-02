<?php
/**
 * @file
 * permission.delete_own_message_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own message content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.message' => 'content_type.message',
);

$optional = array();

$modules = array(
  0 => 'node',
);
