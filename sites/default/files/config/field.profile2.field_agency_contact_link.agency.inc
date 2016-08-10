<?php
/**
 * @file
 * field.profile2.field_agency_contact_link.agency.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'profile2_private' => FALSE,
      'attributes' => array(
        'target' => 'default',
        'class' => '',
        'rel' => '',
      ),
      'url' => 0,
      'title' => 'optional',
      'title_value' => '',
      'title_maxlength' => 128,
      'enable_tokens' => 1,
      'display' => array(
        'url_cutoff' => 80,
      ),
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_agency_contact_link' => array(
              'url' => 'field_agency_contact_link_url',
              'title' => 'field_agency_contact_link_title',
              'attributes' => 'field_agency_contact_link_attributes',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_agency_contact_link' => array(
              'url' => 'field_agency_contact_link_url',
              'title' => 'field_agency_contact_link_title',
              'attributes' => 'field_agency_contact_link_attributes',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_agency_contact_link',
    'type' => 'link_field',
    'module' => 'link',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'url' => array(
        'type' => 'varchar',
        'length' => 2048,
        'not null' => FALSE,
        'sortable' => TRUE,
      ),
      'title' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
        'sortable' => TRUE,
      ),
      'attributes' => array(
        'type' => 'text',
        'size' => 'medium',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Website',
    'widget' => array(
      'weight' => '3',
      'type' => 'link_field',
      'module' => 'link',
      'active' => 0,
      'settings' => array(
        'label_help_description' => '',
      ),
    ),
    'settings' => array(
      'absolute_url' => 1,
      'validate_url' => 0,
      'url' => 0,
      'title' => 'value',
      'title_value' => 'Website',
      'title_label_use_field_label' => 0,
      'title_maxlength' => '128',
      'enable_tokens' => 0,
      'display' => array(
        'url_cutoff' => '80',
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => '',
        'configurable_class' => 0,
        'class' => '',
        'configurable_title' => 0,
        'title' => '',
      ),
      'rel_remove' => 'default',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'link_default',
        'weight' => '8',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'link',
      ),
      'page' => array(
        'label' => 'above',
        'type' => 'link_url',
        'weight' => '8',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'link',
      ),
      'agency' => array(
        'label' => 'above',
        'type' => 'link_url',
        'weight' => '8',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'link',
      ),
    ),
    'required' => 1,
    'description' => 'The URL for the agency website. Beginning http://www.',
    'default_value' => NULL,
    'field_name' => 'field_agency_contact_link',
    'entity_type' => 'profile2',
    'bundle' => 'agency',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'profile2_type.agency' => 'profile2_type.agency',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'link',
);
