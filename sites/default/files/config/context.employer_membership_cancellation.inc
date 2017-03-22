<?php
/**
 * @file
 * context.employer_membership_cancellation.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'employer_membership_cancellation';
$context->description = '';
$context->tag = 'employer';
$context->conditions = array(
  'context_all' => array(
    'values' => array(
      'is_employer' => 'is_employer',
    ),
  ),
  'path' => array(
    'values' => array(
      'subscription/cancelled' => 'subscription/cancelled',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'block-11' => array(
        'module' => 'block',
        'delta' => '11',
        'region' => 'content',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('employer');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
