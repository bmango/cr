<?php
/**
 * @file
 * profile2_type.employer.inc
 */

$api = '2.0.0';

$data = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "employer",
    "label" : "Employer",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 },
    "rdf_mapping" : []
  }');

$dependencies = array();

$optional = array(
  'field.profile2.field_first_name_cr.employer' => 'field.profile2.field_first_name_cr.employer',
  'field.profile2.field_last_name_cr.employer' => 'field.profile2.field_last_name_cr.employer',
  'field.profile2.field_title_cr.employer' => 'field.profile2.field_title_cr.employer',
  'field.profile2.field_title_em.employer' => 'field.profile2.field_title_em.employer',
  'field.profile2.field_first_name_em.employer' => 'field.profile2.field_first_name_em.employer',
  'field.profile2.field_last_name_em.employer' => 'field.profile2.field_last_name_em.employer',
  'field.profile2.field_relationship_em.employer' => 'field.profile2.field_relationship_em.employer',
  'field.profile2.field_gender_cr.employer' => 'field.profile2.field_gender_cr.employer',
  'field.profile2.field_living_arrangements.employer' => 'field.profile2.field_living_arrangements.employer',
  'field.profile2.field_wheelchair_user.employer' => 'field.profile2.field_wheelchair_user.employer',
  'field.profile2.field_alcohol.employer' => 'field.profile2.field_alcohol.employer',
  'field.profile2.field_pets.employer' => 'field.profile2.field_pets.employer',
  'field.profile2.field_smoker.employer' => 'field.profile2.field_smoker.employer',
  'field.profile2.field_diet.employer' => 'field.profile2.field_diet.employer',
  'field.profile2.field_allergies.employer' => 'field.profile2.field_allergies.employer',
  'field.profile2.field_cr_intro.employer' => 'field.profile2.field_cr_intro.employer',
  'field.profile2.field_surname_initial.employer' => 'field.profile2.field_surname_initial.employer',
  'field.profile2.field_age.employer' => 'field.profile2.field_age.employer',
);

$modules = array(
  0 => 'entity',
  1 => 'profile2',
);
