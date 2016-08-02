<?php
/**
 * @file
 * field.node.field_description.job.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
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
            'field_data_field_description' => array(
              'value' => 'field_description_value',
              'format' => 'field_description_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_description' => array(
              'value' => 'field_description_value',
              'format' => 'field_description_format',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'format' => array(
        'table' => 'filter_format',
        'columns' => array(
          'format' => 'format',
        ),
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_description',
    'type' => 'text_long',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'text',
        'size' => 'big',
        'not null' => FALSE,
      ),
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Job Description',
    'widget' => array(
      'weight' => '16',
      'type' => 'text_textarea',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'rows' => '15',
        'label_help_description' => '',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '0',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '4',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'text',
      ),
      'job_details_carer' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '50',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'text',
      ),
      'job_details_agency_' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '55',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'text',
      ),
      'job_details_agency_view' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '45',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'text',
      ),
    ),
    'required' => 1,
    'description' => 'Please enter a description of what the job involves.',
    'default_value' => NULL,
    'field_name' => 'field_description',
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
  1 => 'text',
);
