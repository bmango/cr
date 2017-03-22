<?php
/**
 * @file
 * profile2_type.agency.inc
 */

$api = '2.0.0';

$data = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "agency",
    "label" : "Agency",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 },
    "rdf_mapping" : []
  }');

$dependencies = array();

$optional = array(
  'field.profile2.field_first_name_em.agency' => 'field.profile2.field_first_name_em.agency',
  'field.profile2.field_last_name_em.agency' => 'field.profile2.field_last_name_em.agency',
  'field.profile2.field_telephone_em.agency' => 'field.profile2.field_telephone_em.agency',
  'field.profile2.field_address.agency' => 'field.profile2.field_address.agency',
  'field.profile2.field_description.agency' => 'field.profile2.field_description.agency',
  'field.profile2.field_location.agency' => 'field.profile2.field_location.agency',
  'field.profile2.field_agency_contact_link.agency' => 'field.profile2.field_agency_contact_link.agency',
  'field.profile2.field_company.agency' => 'field.profile2.field_company.agency',
  'field.profile2.field_agency_contact_email.agency' => 'field.profile2.field_agency_contact_email.agency',
  'field.profile2.field_image.agency' => 'field.profile2.field_image.agency',
  'field.profile2.field_surname_initial.agency' => 'field.profile2.field_surname_initial.agency',
  'field.profile2.field_care_category_multiple.agency' => 'field.profile2.field_care_category_multiple.agency',
);

$modules = array(
  0 => 'entity',
  1 => 'profile2',
);
