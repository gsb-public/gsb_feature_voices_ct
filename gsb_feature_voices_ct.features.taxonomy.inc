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
    'person_type' => array(
      'name' => 'Person Type',
      'machine_name' => 'person_type',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
