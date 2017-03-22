<?php
/**
 * @file
 * field.node.field_agency_contact.job.inc
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
            'field_data_field_agency_contact' => array(
              'value' => 'field_agency_contact_value',
              'format' => 'field_agency_contact_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_agency_contact' => array(
              'value' => 'field_agency_contact_value',
              'format' => 'field_agency_contact_format',
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
    'field_name' => 'field_agency_contact',
    'type' => 'text',
    'module' => 'text',
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
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Agency Contact',
    'widget' => array(
      'weight' => '17',
      'type' => 'text_textfield',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'size' => '60',
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
        'weight' => '13',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '21',
        'settings' => array(),
      ),
      'job_details_carer' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '13',
        'settings' => array(),
      ),
      'job_details_agency_' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '16',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'text',
      ),
      'job_details_agency_view' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '2',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => 'What is the name of the contact for this job?',
    'default_value' => NULL,
    'field_name' => 'field_agency_contact',
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
