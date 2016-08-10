<?php
/**
 * @file
 * field.profile2.field_address.agency.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'profile2_private' => 1,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_address' => array(
              'country' => 'field_address_country',
              'administrative_area' => 'field_address_administrative_area',
              'sub_administrative_area' => 'field_address_sub_administrative_area',
              'locality' => 'field_address_locality',
              'dependent_locality' => 'field_address_dependent_locality',
              'postal_code' => 'field_address_postal_code',
              'thoroughfare' => 'field_address_thoroughfare',
              'premise' => 'field_address_premise',
              'sub_premise' => 'field_address_sub_premise',
              'organisation_name' => 'field_address_organisation_name',
              'name_line' => 'field_address_name_line',
              'first_name' => 'field_address_first_name',
              'last_name' => 'field_address_last_name',
              'data' => 'field_address_data',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_address' => array(
              'country' => 'field_address_country',
              'administrative_area' => 'field_address_administrative_area',
              'sub_administrative_area' => 'field_address_sub_administrative_area',
              'locality' => 'field_address_locality',
              'dependent_locality' => 'field_address_dependent_locality',
              'postal_code' => 'field_address_postal_code',
              'thoroughfare' => 'field_address_thoroughfare',
              'premise' => 'field_address_premise',
              'sub_premise' => 'field_address_sub_premise',
              'organisation_name' => 'field_address_organisation_name',
              'name_line' => 'field_address_name_line',
              'first_name' => 'field_address_first_name',
              'last_name' => 'field_address_last_name',
              'data' => 'field_address_data',
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
    'field_name' => 'field_address',
    'type' => 'addressfield',
    'module' => 'addressfield',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'country' => array(
        'description' => 'Two letter ISO country code of this address.',
        'type' => 'varchar',
        'length' => 2,
        'not null' => FALSE,
        'default' => '',
      ),
      'administrative_area' => array(
        'description' => 'The administrative area of this address. (i.e. State/Province)',
        'type' => 'varchar',
        'length' => 255,
        'default' => '',
        'not null' => FALSE,
      ),
      'sub_administrative_area' => array(
        'description' => 'The sub administrative area of this address.',
        'type' => 'varchar',
        'length' => 255,
        'default' => '',
        'not null' => FALSE,
      ),
      'locality' => array(
        'description' => 'The locality of this address. (i.e. City)',
        'type' => 'varchar',
        'length' => 255,
        'default' => '',
        'not null' => FALSE,
      ),
      'dependent_locality' => array(
        'description' => 'The dependent locality of this address.',
        'type' => 'varchar',
        'length' => 255,
        'default' => '',
        'not null' => FALSE,
      ),
      'postal_code' => array(
        'description' => 'The postal code of this address.',
        'type' => 'varchar',
        'length' => 255,
        'default' => '',
        'not null' => FALSE,
      ),
      'thoroughfare' => array(
        'description' => 'The thoroughfare of this address. (i.e. Street address)',
        'type' => 'varchar',
        'length' => 255,
        'default' => '',
        'not null' => FALSE,
      ),
      'premise' => array(
        'description' => 'The premise of this address. (i.e. Apartment / Suite number)',
        'type' => 'varchar',
        'length' => 255,
        'default' => '',
        'not null' => FALSE,
      ),
      'sub_premise' => array(
        'description' => 'The sub_premise of this address.',
        'type' => 'varchar',
        'length' => 255,
        'default' => '',
        'not null' => FALSE,
      ),
      'organisation_name' => array(
        'description' => 'Contents of a primary OrganisationName element in the xNL XML.',
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
        'default' => '',
      ),
      'name_line' => array(
        'description' => 'Contents of a primary NameLine element in the xNL XML.',
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
        'default' => '',
      ),
      'first_name' => array(
        'description' => 'Contents of the FirstName element of a primary PersonName element in the xNL XML.',
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
        'default' => '',
      ),
      'last_name' => array(
        'description' => 'Contents of the LastName element of a primary PersonName element in the xNL XML.',
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
        'default' => '',
      ),
      'data' => array(
        'description' => 'Additional data for this address.',
        'type' => 'text',
        'size' => 'big',
        'not null' => FALSE,
        'serialize' => TRUE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Address',
    'widget' => array(
      'weight' => '6',
      'type' => 'addressfield_standard',
      'module' => 'addressfield',
      'active' => 1,
      'settings' => array(
        'available_countries' => array(
          'GB' => 'GB',
        ),
        'default_country' => 'site_default',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
        'label_help_description' => '',
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'addressfield_default',
        'weight' => '3',
        'settings' => array(
          'use_widget_handlers' => 1,
          'format_handlers' => array(
            0 => 'address',
          ),
          'field_formatter_label' => '',
        ),
        'module' => 'addressfield',
      ),
      'page' => array(
        'label' => 'above',
        'type' => 'addressfield_default',
        'weight' => '9',
        'settings' => array(
          'use_widget_handlers' => 1,
          'format_handlers' => array(
            0 => 'address',
          ),
          'field_formatter_label' => '',
        ),
        'module' => 'addressfield',
      ),
      'agency' => array(
        'label' => 'above',
        'type' => 'addressfield_default',
        'weight' => '9',
        'settings' => array(
          'use_widget_handlers' => 1,
          'format_handlers' => array(
            0 => 'address',
          ),
          'field_formatter_label' => '',
        ),
        'module' => 'addressfield',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_address',
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
  1 => 'addressfield',
);
