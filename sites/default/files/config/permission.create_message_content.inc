<?php
/**
 * @file
 * permission.create_message_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create message content',
  'roles' => array(
    0 => 'employer active',
    1 => 'carer active',
    2 => 'editor',
    3 => 'administrator',
  ),
);

$dependencies = array(
  'content_type.message' => 'content_type.message',
);

$optional = array();

$modules = array(
  0 => 'node',
);
