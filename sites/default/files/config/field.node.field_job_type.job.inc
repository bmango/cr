<?php
/**
 * @file
 * field.node.field_job_type.job.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Live in' => 'Live in',
        'Live out' => 'Live out',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_job_type' => array(
              'value' => 'field_job_type_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_job_type' => array(
              'value' => 'field_job_type_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_job_type',
    'type' => 'list_text',
    'module' => 'list',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Job Type',
    'widget' => array(
      'weight' => '2',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(
        'label_help_description' => 'Will the carer be live in or live out?',
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '1',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '6',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
      'job_details_carer' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '38',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
      'job_details_agency_' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '34',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
      'job_details_agency_view' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '27',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_job_type',
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
  1 => 'list',
  2 => 'options',
);
