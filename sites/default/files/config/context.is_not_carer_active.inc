<?php
/**
 * @file
 * context.is_not_carer_active.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'is_not_carer_active';
$context->description = 'Context showing not a carer member';
$context->tag = '';
$context->conditions = array(
  'user' => array(
    'values' => array(
      'carer active' => 'carer active',
    ),
    'options' => array(
      'negate_role' => 1,
    ),
  ),
);
$context->reactions = array();
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('Context showing not a carer member');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
