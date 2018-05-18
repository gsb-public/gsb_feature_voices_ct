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
  $path = \'mba/student-life/voices\';
} elseif ($person_type->name == \'Sloan Fellow\') {
  $path = \'msx/life/voices\';
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

  return $field_bases;
}
