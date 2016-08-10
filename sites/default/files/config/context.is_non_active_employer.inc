<?php
/**
 * @file
 * context.is_non_active_employer.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'is_non_active_employer';
$context->description = '';
$context->tag = '';
$context->conditions = array(
  'user' => array(
    'values' => array(
      'employer active' => 'employer active',
    ),
    'options' => array(
      'negate_role' => 1,
    ),
  ),
);
$context->reactions = array();
$context->condition_mode = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
