<?php
/**
 * @file
 * gsb_feature_voices_ct.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gsb_feature_voices_ct_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_voices_cta'.
  $field_bases['field_voices_cta'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_voices_cta',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$voices_path = field_get_items($entity_type, $entity, \'field_voices_path\');

$person_type_id = field_get_items($entity_type, $entity, \'field_person_type\');
$person_type = taxonomy_term_load($person_type_id[0][\'tid\']);

$entity_field[0]["value"] = \'<a href="/\'.$voices_path[0]["value"].\'" class="cta">See All \'.$person_type->name.\' Voices</a>\';
',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 128,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'text',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_voices_explore_program_cta'.
  $field_bases['field_voices_explore_program_cta'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_voices_explore_program_cta',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$person_type_id = field_get_items($entity_type, $entity, \'field_person_type\');
$path = variable_get(\'gsb_feature_voices_cta_explore_programs_path-\'.$person_type_id[0][\'tid\']);
$text = variable_get(\'gsb_feature_voices_cta_explore_programs_text-\'.$person_type_id[0][\'tid\']);

$entity_field[0]["value"] = \'<a href="/\'.$path.\'" class="cta">\'.$text.\'</a>\';
',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 300,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'text',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 0,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_voices_explore_programs_pa'.
  $field_bases['field_voices_explore_programs_pa'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_voices_explore_programs_pa',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$person_type_id = field_get_items($entity_type, $entity, \'field_person_type\');
$entity_field[0][\'value\'] = variable_get(\'gsb_feature_voices_cta_explore_programs_path-\'.$person_type_id[0][\'tid\']);',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 256,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'text',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 0,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_voices_explore_programs_te'.
  $field_bases['field_voices_explore_programs_te'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_voices_explore_programs_te',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$person_type_id = field_get_items($entity_type, $entity, \'field_person_type\');
$entity_field[0][\'value\'] = variable_get(\'gsb_feature_voices_cta_explore_programs_text-\'.$person_type_id[0][\'tid\']);',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 256,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'text',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 0,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_voices_faculty_acadmc_area'.
  $field_bases['field_voices_faculty_acadmc_area'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_voices_faculty_acadmc_area',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$person_type_id = field_get_items($entity_type, $entity, \'field_person_fac_single_ref\');
$node = node_load($person_type_id[0][\'target_id\']);
if (isset($node->field_academic_area_single[\'und\'][0][\'tid\'])) {
  $term = taxonomy_term_load($node->field_academic_area_single[\'und\'][0][\'tid\']);
  $entity_field[0][\'value\'] = $term->name;
}',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 256,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'text',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 0,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_voices_faculty_joint_appt'.
  $field_bases['field_voices_faculty_joint_appt'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_voices_faculty_joint_appt',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$person_type_id = field_get_items($entity_type, $entity, \'field_person_fac_single_ref\');
$node = node_load($person_type_id[0][\'target_id\']);
if (isset($node->field_academic_area_single[\'und\'][0][\'tid\'])) {
  $entity_field[0][\'value\'] = taxonomy_term_load($node->field_academic_area_single[\'und\'][0][\'tid\']);
}',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 256,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'text',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 0,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_voices_faculty_sad'.
  $field_bases['field_voices_faculty_sad'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_voices_faculty_sad',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$person_type_id = field_get_items($entity_type, $entity, \'field_person_fac_single_ref\');
$node = node_load($person_type_id[0][\'target_id\']);
if (isset($node->field_sad[\'und\'][0][\'value\']) && $node->field_sad[\'und\'][0][\'value\'] == \'yes\') {
 $entity_field[0][\'value\'] = \'Senior Associate Dean\';
} else {
 $entity_field[0][\'value\'] = \'\';
};
',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 256,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'text',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 0,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_voices_faculty_title'.
  $field_bases['field_voices_faculty_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_voices_faculty_title',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$person_type_id = field_get_items($entity_type, $entity, \'field_person_fac_single_ref\');
$node = node_load($person_type_id[0][\'target_id\']);
if (isset($node->field_endowed_title_appointment[\'und\'][0][\'title\'])) {
$entity_field[0][\'value\'] = $node->field_endowed_title_appointment[\'und\'][0][\'title\'];
}',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 256,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'text',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 0,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_voices_full_name'.
  $field_bases['field_voices_full_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_voices_full_name',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$person_type_id = field_get_items($entity_type, $entity, \'field_person_type\');
$person_type = taxonomy_term_load($person_type_id[0][\'tid\']);

if ($person_type->name == \'Faculty\') {
  $faculty_lookup_id =field_get_items($entity_type, $entity ,\'field_person_fac_single_ref\');
  $faculty = node_load($faculty_lookup_id[0][\'target_id\']);
  $entity_field[0][\'value\'] = $faculty->title;
} else {
  $field_a = field_get_items($entity_type, $entity, \'field_first_name\');
  $field_b = field_get_items($entity_type, $entity, \'field_last_name\');
  $entity_field[0][\'value\'] = $field_a[0][\'value\'] . " " . $field_b[0][\'value\'];
}
',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 256,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'text',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_voices_path'.
  $field_bases['field_voices_path'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_voices_path',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$person_type_id = field_get_items($entity_type, $entity, \'field_person_type\');
$person_type = taxonomy_term_load($person_type_id[0][\'tid\']);

if ($person_type->name == \'MBA Student\') {
  $path = \'programs/mba/student-life/voices\';
} elseif ($person_type->name == \'Sloan Fellow\') {
  $path = \'programs/msx/life/voices\';
} elseif ($person_type->name == \'PhD Student\') {
  $path = \'programs/phd/student-life/voices\';
} elseif ($person_type->name == \'MBA Alumni\') {
  $path = \'programs/mba/alumni-community/voices/\';
} elseif ($person_type->name == \'MSx/Sloan Alumni\') {
  $path = \'programs/msx/alumni-community/voices\';
} elseif ($person_type->name == \'Executive Education Participant\') {
  $path = \'exec-ed/difference/voices\';
  } elseif ($person_type->name == \'Seed Transformation Program Participant\') {
  $path = \'seed/transformation-program/voices\';
  } elseif ($person_type->name == \'Faculty\') {
  $path = \'faculty-research/faculty/voices\';
} else {
  $path = \'voices-path\';
}
$entity_field[0]["value"] = $path;',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 256,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'text',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_voices_stay_in_touch_cta'.
  $field_bases['field_voices_stay_in_touch_cta'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_voices_stay_in_touch_cta',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$person_type_id = field_get_items($entity_type, $entity, \'field_person_type\');
$path = variable_get(\'gsb_feature_voices_cta_stay_in_touch_path-\'.$person_type_id[0][\'tid\']);
$text = variable_get(\'gsb_feature_voices_cta_stay_in_touch_text-\'.$person_type_id[0][\'tid\']);

$entity_field[0]["value"] = \'<a href="/\'.$path.\'" class="cta">\'.$text.\'</a>\';
',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 300,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'text',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 0,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_voices_stay_in_touch_path'.
  $field_bases['field_voices_stay_in_touch_path'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_voices_stay_in_touch_path',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$person_type_id = field_get_items($entity_type, $entity, \'field_person_type\');
$entity_field[0][\'value\'] = variable_get(\'gsb_feature_voices_cta_stay_in_touch_path-\'.$person_type_id[0][\'tid\']);',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 256,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'text',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 0,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_voices_stay_in_touch_text'.
  $field_bases['field_voices_stay_in_touch_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_voices_stay_in_touch_text',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$person_type_id = field_get_items($entity_type, $entity, \'field_person_type\');
$entity_field[0][\'value\'] = variable_get(\'gsb_feature_voices_cta_stay_in_touch_text-\'.$person_type_id[0][\'tid\']);',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 256,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'text',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 0,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  return $field_bases;
}
