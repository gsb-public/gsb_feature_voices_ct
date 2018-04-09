<?php
/**
 * @file
 * gsb_feature_voices_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_voices_ct_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_administration|node|voices|form';
  $field_group->group_name = 'group_administration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Administration',
    'weight' => '1',
    'children' => array(
      0 => 'field_authors',
      1 => 'field_date',
      2 => 'field_image_single_public',
      3 => 'field_link_key_audio',
      4 => 'field_link_key_video',
      5 => 'field_link_single',
      6 => 'field_person_type',
      7 => 'workbench_access',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_administration|node|voices|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background_and_related|node|voices|form';
  $field_group->group_name = 'group_background_and_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Background and Related',
    'weight' => '4',
    'children' => array(
      0 => 'field_academic_degrees_unlimited',
      1 => 'field_location',
      2 => 'field_professional_experience',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_background_and_related|node|voices|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_except_faculty|node|voices|form';
  $field_group->group_name = 'group_except_faculty';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Except Faculty',
    'weight' => '2',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_degree_year',
      3 => 'field_centers_research_programs',
      4 => 'field_profile_photo',
      5 => 'field_profile_links',
      6 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Except Faculty',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-except-faculty field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_except_faculty|node|voices|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_and_body|node|voices|form';
  $field_group->group_name = 'group_header_and_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Header and Body',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_image_key_image',
      2 => 'field_slideshow_style',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_header_and_body|node|voices|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|voices|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_administration',
      1 => 'group_background_and_related',
      2 => 'group_header_and_body',
      3 => 'group_except_faculty',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tabs|node|voices|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Administration');
  t('Background and Related');
  t('Except Faculty');
  t('Header and Body');
  t('Top Tabs');

  return $field_groups;
}
