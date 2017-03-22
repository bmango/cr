<?php
/**
 * @file
 * context.carer_subscription.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'carer_subscription';
$context->description = '';
$context->tag = '';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'subscription' => 'subscription',
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
  'plan_group' => array(
    'pgid' => '2',
  ),
);
$context->condition_mode = 1;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
