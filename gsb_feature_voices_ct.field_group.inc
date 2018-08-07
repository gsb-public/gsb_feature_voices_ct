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
      3 => 'field_degree_year',
      4 => 'field_first_name',
      5 => 'field_image_single_public',
      6 => 'field_last_name',
      7 => 'field_link_key_audio',
      8 => 'field_link_key_video',
      9 => 'field_link_single',
      10 => 'field_pathauto_title_alias',
      11 => 'field_person_fac_single_ref',
      12 => 'field_person_type',
      13 => 'field_person_type_execed',
      14 => 'field_title_position_single',
      15 => 'workbench_access',
      16 => 'group_taxonomy',
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
    'label' => 'Alumni/Past Participant',
    'weight' => '64',
    'children' => array(
      0 => 'field_alumni_story',
      1 => 'field_program_unlimited',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Alumni/Past Participant',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
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
      1 => 'field_alumni_directory_link',
      2 => 'field_field_of_study',
      3 => 'field_location',
      4 => 'field_professional_experience',
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
      2 => 'field_quote',
      3 => 'field_background_color',
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
    'weight' => '66',
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
    'weight' => '67',
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
      1 => 'group_industry',
      2 => 'group_region',
      3 => 'group_tags',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voice_wrapper|node|voices|teaser';
  $field_group->group_name = 'group_voice_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '17',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-voice-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voice_wrapper|node|voices|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voices_group|node|voices|default';
  $field_group->group_name = 'group_voices_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_degree_year',
      1 => 'field_title_position_single',
      2 => 'field_voices_full_name',
      3 => 'field_background_color',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-voices-group field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voices_group|node|voices|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_related|node|voices|default';
  $field_group->group_name = 'group_wrapper_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_wrapper_tablet_4';
  $field_group->data = array(
    'label' => 'Related',
    'weight' => '24',
    'children' => array(
      0 => 'field_file_unlimited_public',
      1 => 'field_link_unlimited',
      2 => 'field_person_ref_unlimited',
      3 => 'field_related_faculty',
      4 => 'field_related_idea_story',
      5 => 'field_related_other_unlimited',
      6 => 'related_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Related',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-related field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_wrapper_related|node|voices|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_tablet_1|node|voices|default';
  $field_group->group_name = 'group_wrapper_tablet_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tablet 1',
    'weight' => '11',
    'children' => array(
      0 => 'field_profile_photo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tablet 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-tablet-1 field-group-fieldset',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_tablet_1|node|voices|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_tablet_2|node|voices|default';
  $field_group->group_name = 'group_wrapper_tablet_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tablet 2',
    'weight' => '12',
    'children' => array(
      0 => 'field_academic_degrees_unlimited',
      1 => 'field_field_of_study',
      2 => 'field_location',
      3 => 'field_professional_experience',
      4 => 'field_program_unlimited',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tablet 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-tablet-2 field-group-fieldset',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_tablet_2|node|voices|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_tablet_3|node|voices|default';
  $field_group->group_name = 'group_wrapper_tablet_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tablet 3',
    'weight' => '13',
    'children' => array(
      0 => 'field_alumni_directory_link',
      1 => 'field_industry',
      2 => 'field_profile_links',
      3 => 'field_program_attended',
      4 => 'field_related_programs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tablet 3',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-tablet-3 field-group-fieldset',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_tablet_3|node|voices|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_tablet_4|node|voices|default';
  $field_group->group_name = 'group_wrapper_tablet_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'voices';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tablet 4',
    'weight' => '14',
    'children' => array(
      0 => 'voices_ct_background_rail',
      1 => 'group_wrapper_related',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tablet 4',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-tablet-4 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_tablet_4|node|voices|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Administration');
  t('Alumni/Past Participant');
  t('Background and Related');
  t('Centers');
  t('Except Faculty');
  t('Header and Body');
  t('Industry');
  t('Region');
  t('Related');
  t('Related Content');
  t('Tablet 1');
  t('Tablet 2');
  t('Tablet 3');
  t('Tablet 4');
  t('Tagging');
  t('Tags');
  t('Top Tabs');
  t('Wrapper');

  return $field_groups;
}
