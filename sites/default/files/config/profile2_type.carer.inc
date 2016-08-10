<?php
/**
 * @file
 * profile2_type.carer.inc
 */

$api = '2.0.0';

$data = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "carer",
    "label" : "Carer",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 },
    "rdf_mapping" : []
  }');

$dependencies = array();

$optional = array(
  'field.profile2.field_title_em.carer' => 'field.profile2.field_title_em.carer',
  'field.profile2.field_last_name_em.carer' => 'field.profile2.field_last_name_em.carer',
  'field.profile2.field_address.carer' => 'field.profile2.field_address.carer',
  'field.profile2.field_description.carer' => 'field.profile2.field_description.carer',
  'field.profile2.field_job_status.carer' => 'field.profile2.field_job_status.carer',
  'field.profile2.field_job_type.carer' => 'field.profile2.field_job_type.carer',
  'field.profile2.field_dbs_certificate.carer' => 'field.profile2.field_dbs_certificate.carer',
  'field.profile2.field_extended_dbs_certificate.carer' => 'field.profile2.field_extended_dbs_certificate.carer',
  'field.profile2.field_dbs_number.carer' => 'field.profile2.field_dbs_number.carer',
  'field.profile2.field_ni_number.carer' => 'field.profile2.field_ni_number.carer',
  'field.profile2.field_nationality.carer' => 'field.profile2.field_nationality.carer',
  'field.profile2.field_work_permit.carer' => 'field.profile2.field_work_permit.carer',
  'field.profile2.field_spoken_english_level.carer' => 'field.profile2.field_spoken_english_level.carer',
  'field.profile2.field_driver_licence_required.carer' => 'field.profile2.field_driver_licence_required.carer',
  'field.profile2.field_age.carer' => 'field.profile2.field_age.carer',
  'field.profile2.field_gender_cr.carer' => 'field.profile2.field_gender_cr.carer',
  'field.profile2.field_smoker.carer' => 'field.profile2.field_smoker.carer',
  'field.profile2.field_lgbt_care.carer' => 'field.profile2.field_lgbt_care.carer',
  'field.profile2.field_qualifications.carer' => 'field.profile2.field_qualifications.carer',
  'field.profile2.field_qualifications_intro.carer' => 'field.profile2.field_qualifications_intro.carer',
  'field.profile2.field_work_experience.carer' => 'field.profile2.field_work_experience.carer',
  'field.profile2.field_care_qualifications.carer' => 'field.profile2.field_care_qualifications.carer',
  'field.profile2.field_profile_active.carer' => 'field.profile2.field_profile_active.carer',
  'field.profile2.field_other_spoken_languages.carer' => 'field.profile2.field_other_spoken_languages.carer',
  'field.profile2.field_first_name_em.carer' => 'field.profile2.field_first_name_em.carer',
  'field.profile2.field_geofield.carer' => 'field.profile2.field_geofield.carer',
  'field.profile2.field_district.carer' => 'field.profile2.field_district.carer',
  'field.profile2.field_references.carer' => 'field.profile2.field_references.carer',
  'field.profile2.field_surname_initial.carer' => 'field.profile2.field_surname_initial.carer',
  'field.profile2.field_availability.carer' => 'field.profile2.field_availability.carer',
  'field.profile2.field_experience.carer' => 'field.profile2.field_experience.carer',
);

$modules = array(
  0 => 'entity',
  1 => 'profile2',
);
