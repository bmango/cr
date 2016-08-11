<?php
/**
 * @file
 * field.node.field_agency_contact_link.job.inc
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
    'label' => 'Website Link',
    'widget' => array(
      'weight' => '20',
      'type' => 'link_field',
      'module' => 'link',
      'active' => 0,
      'settings' => array(
        'label_help_description' => 'A link to an application page or more information about this job, or general information. Use the title field to give a description to the link; eg: Application Link, More Details, etc',
      ),
    ),
    'settings' => array(
      'absolute_url' => 1,
      'validate_url' => 1,
      'url' => 0,
      'title' => 'optional',
      'title_value' => '',
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
        'weight' => '16',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'link',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '24',
        'settings' => array(),
      ),
      'job_details_carer' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '16',
        'settings' => array(),
      ),
      'job_details_agency_' => array(
        'label' => 'above',
        'type' => 'link_default',
        'weight' => '19',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'link',
      ),
      'job_details_agency_view' => array(
        'label' => 'above',
        'type' => 'link_default',
        'weight' => '4',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'link',
      ),
    ),
    'required' => 0,
    'description' => 'A link to an application page or more information about this job, or general information. Use the title field to give a description to the link; eg: Application Link, More Details, etc',
    'default_value' => NULL,
    'field_name' => 'field_agency_contact_link',
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
  1 => 'link',
);
