<?php
/**
 * @file
 * field.node.field_job_class.job.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
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
            'field_data_field_job_class' => array(
              'value' => 'field_job_class_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_job_class' => array(
              'value' => 'field_job_class_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_job_class',
    'type' => 'field_hidden_text',
    'module' => 'field_hidden',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '255',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Job Class',
    'widget' => array(
      'weight' => '18',
      'type' => 'field_hidden',
      'module' => 'field_hidden',
      'active' => 0,
      'settings' => array(
        'label_help_description' => '',
      ),
    ),
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '18',
        'settings' => array(),
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '25',
        'settings' => array(),
      ),
      'job_details_carer' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '17',
        'settings' => array(),
      ),
      'job_details_agency_' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '17',
        'settings' => array(),
      ),
      'job_details_agency_view' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '18',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => array(
      0 => array(
        'value' => 'employer',
      ),
    ),
    'field_name' => 'field_job_class',
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
  1 => 'field_hidden',
);
