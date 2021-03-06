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
      1 => 'field_centers_research_programs',
      2 => 'field_date',
      3 => 'field_first_name',
      4 => 'field_image_single_public',
      5 => 'field_last_name',
      6 => 'field_link_key_audio',
      7 => 'field_link_key_video',
      8 => 'field_link_single',
      9 => 'field_person_fac_single_ref',
      10 => 'field_title_position_single',
      11 => 'field_degree_year',
      12 => 'field_person_type',
      13 => 'field_person_type_execed',
      14 => 'workbench_access',
      15 => 'group_taxonomy',
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
  $field_group->identifier = 'group_alumni_story|node|voices|form';
  $field_group->group_name = 'group_alumni_story';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Alumni Story',
    'weight' => '64',
    'children' => array(
      0 => 'field_alumni_story',
      1 => 'field_program_unlimited',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_alumni_story|node|voices|form'] = $field_group;

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
    'weight' => '3',
    'children' => array(
      0 => 'field_academic_degrees_unlimited',
      1 => 'field_location',
      2 => 'field_professional_experience',
      3 => 'field_alumni_directory_link',
      4 => 'field_field_of_study',
      5 => 'field_profile_links',
      6 => 'field_profile_photo',
      7 => 'field_program_attended',
      8 => 'group_related_content',
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
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_centers|node|voices|form';
  $field_group->group_name = 'group_centers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_except_faculty';
  $field_group->data = array(
    'label' => 'Centers',
    'weight' => '58',
    'children' => array(
      0 => 'field_centers_research_programs',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-centers field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_centers|node|voices|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_except_faculty|node|voices|form';
  $field_group->group_name = 'group_except_faculty';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_administration';
  $field_group->data = array(
    'label' => 'Except Faculty',
    'weight' => '21',
    'children' => array(
      0 => 'field_degree_year',
      1 => 'field_first_name',
      2 => 'field_last_name',
      3 => 'field_profile_links',
      4 => 'field_profile_photo',
      5 => 'title',
      6 => 'group_centers',
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
    'weight' => '2',
    'children' => array(
      0 => 'field_body',
      1 => 'field_image_key_image',
      2 => 'field_slideshow_style',
      3 => 'field_quote',
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
  $field_group->identifier = 'group_industry|node|voices|form';
  $field_group->group_name = 'group_industry';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Industry',
    'weight' => '65',
    'children' => array(
      0 => 'field_industry',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-industry field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_industry|node|voices|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_region|node|voices|form';
  $field_group->group_name = 'group_region';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Region',
    'weight' => '67',
    'children' => array(
      0 => 'field_region_of_interest',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-region field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_region|node|voices|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|voices|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_background_and_related';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '59',
    'children' => array(
      0 => 'field_file_unlimited_public',
      1 => 'field_link_unlimited',
      2 => 'field_person_ref_unlimited',
      3 => 'field_related_faculty',
      4 => 'field_related_idea_story',
      5 => 'field_related_other_unlimited',
      6 => 'field_related_programs',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-content field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_related_content|node|voices|form'] = $field_group;

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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|voices|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '68',
    'children' => array(
      0 => 'field_tag',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tags|node|voices|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|voices|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_administration';
  $field_group->data = array(
    'label' => 'Tagging',
    'weight' => '25',
    'children' => array(
      0 => 'group_alumni_story',
      1 => 'group_tags',
      2 => 'group_industry',
      3 => 'group_region',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'Tagging',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_taxonomy|node|voices|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Administration');
  t('Alumni Story');
  t('Background and Related');
  t('Centers');
  t('Except Faculty');
  t('Header and Body');
  t('Industry');
  t('Region');
  t('Related Content');
  t('Tagging');
  t('Tags');
  t('Top Tabs');

  return $field_groups;
}
