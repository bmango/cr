<?php
/**
 * @file
 * context.employer_membership_lapsed_block.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'employer_membership_lapsed_block';
$context->description = '';
$context->tag = '';
$context->conditions = array(
  'context_all' => array(
    'values' => array(
      'is_non_active_employer' => 'is_non_active_employer',
      'is_employer' => 'is_employer',
    ),
  ),
  'path' => array(
    'values' => array(
      'employer-home' => 'employer-home',
      '<front>' => '<front>',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'block-9' => array(
        'module' => 'block',
        'delta' => '9',
        'region' => 'content',
        'weight' => '-20',
      ),
    ),
  ),
);
$context->condition_mode = 1;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
