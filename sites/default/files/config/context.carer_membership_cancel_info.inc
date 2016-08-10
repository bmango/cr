<?php
/**
 * @file
 * context.carer_membership_cancel_info.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'carer_membership_cancel_info';
$context->description = '';
$context->tag = 'carer';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'subscription/cancel' => 'subscription/cancel',
    ),
  ),
  'user' => array(
    'values' => array(
      'carer' => 'carer',
    ),
    'options' => array(
      'negate_role' => 0,
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'block-15' => array(
        'module' => 'block',
        'delta' => '15',
        'region' => 'content',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('carer');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
