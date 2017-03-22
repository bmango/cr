<?php
/**
 * @file
 * field.node.field_pay.job.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'precision' => '10',
      'scale' => '2',
      'decimal_separator' => '.',
      'profile2_private' => FALSE,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_pay' => array(
              'value' => 'field_pay_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_pay' => array(
              'value' => 'field_pay_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_pay',
    'type' => 'number_decimal',
    'module' => 'number',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'numeric',
        'precision' => '10',
        'scale' => '2',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Pay',
    'widget' => array(
      'weight' => '8',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(
        'label_help_description' => '',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '100000',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'number_decimal',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 2,
          'prefix_suffix' => TRUE,
          'field_formatter_label' => '',
        ),
        'module' => 'number',
        'weight' => 23,
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '11',
        'settings' => array(),
      ),
      'job_details_agency_' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '39',
        'settings' => array(),
      ),
      'job_details_agency_view' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '32',
        'settings' => array(),
      ),
      'job_details_carer' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '43',
        'settings' => array(),
      ),
    ),
    'required' => 1,
    'description' => 'What is the pay rate for this job in £s?',
    'default_value' => NULL,
    'field_name' => 'field_pay',
    'entity_type' => 'node',
    'bundle' => 'job',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.job' => 'content_type.job',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'number',
);
