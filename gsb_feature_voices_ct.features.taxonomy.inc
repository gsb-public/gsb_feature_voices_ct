<?php
/**
 * @file
 * gsb_feature_voices_ct.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gsb_feature_voices_ct_taxonomy_default_vocabularies() {
  return array(
    'field_of_study' => array(
      'name' => 'Field of Study',
      'machine_name' => 'field_of_study',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'person_type' => array(
      'name' => 'Person Type',
      'machine_name' => 'person_type',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'person_type_execed' => array(
      'name' => 'Person Type - ExecEd',
      'machine_name' => 'person_type_execed',
      'description' => 'Executive Education people types',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
