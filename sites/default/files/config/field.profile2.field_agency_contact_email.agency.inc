<?php
/**
 * @file
 * field.profile2.field_agency_contact_email.agency.inc
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
            'field_data_field_agency_contact_email' => array(
              'email' => 'field_agency_contact_email_email',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_agency_contact_email' => array(
              'email' => 'field_agency_contact_email_email',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_agency_contact_email',
    'type' => 'email',
    'module' => 'email',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'email' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Main Enquiries Email',
    'widget' => array(
      'weight' => '4',
      'type' => 'email_textfield',
      'module' => 'email',
      'active' => 1,
      'settings' => array(
        'size' => '60',
        'label_help_description' => '',
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'email_default',
        'weight' => '10',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'email',
      ),
      'page' => array(
        'label' => 'above',
        'type' => 'email_default',
        'weight' => '7',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'email',
      ),
      'agency' => array(
        'label' => 'above',
        'type' => 'email_default',
        'weight' => '7',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'email',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_agency_contact_email',
    'entity_type' => 'profile2',
    'bundle' => 'agency',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'email',
);
