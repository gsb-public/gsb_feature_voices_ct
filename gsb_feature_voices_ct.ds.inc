<?php
/**
 * @file
 * gsb_feature_voices_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_voices_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|voices|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'voices';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_authors' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'byline',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_degree_year' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-name-field-degree-year',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_full_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h1',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_profile_photo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => ' background-rail-img',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_quote' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_title_position_single' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-name-field-title-position-single',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|voices|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_voices_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|voices|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'voices';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_image_key_image',
        1 => 'field_quote',
        2 => 'field_slideshow_style',
        3 => 'group_voices_group',
        5 => 'field_full_name',
        7 => 'field_degree_year',
        8 => 'field_title_position_single',
      ),
      'left' => array(
        4 => 'field_body',
        6 => 'field_date',
        9 => 'field_authors',
        10 => 'field_tag',
      ),
      'right' => array(
        11 => 'field_profile_photo',
        12 => 'field_location',
        13 => 'field_program_unlimited',
        14 => 'field_academic_degrees_unlimited',
        15 => 'field_alumni_story',
        16 => 'field_program_attended',
        17 => 'field_related_programs',
        18 => 'field_professional_experience',
        19 => 'field_profile_links',
        20 => 'field_industry',
        21 => 'field_field_of_study',
        22 => 'field_region_of_interest',
        23 => 'field_related_other_unlimited',
        24 => 'field_alumni_directory_link',
        25 => 'field_link_unlimited',
        26 => 'field_person_ref_unlimited',
        27 => 'gsb_feature_base_fields_faculty_authors',
        28 => 'field_person_type',
        29 => 'field_person_type_execed',
        30 => 'field_file_unlimited_public',
        31 => 'field_voices_path',
        32 => 'field_person_fac_single_ref',
        33 => 'field_related_idea_story',
      ),
    ),
    'fields' => array(
      'field_image_key_image' => 'header',
      'field_quote' => 'header',
      'field_slideshow_style' => 'header',
      'group_voices_group' => 'header',
      'field_body' => 'left',
      'field_full_name' => 'header',
      'field_date' => 'left',
      'field_degree_year' => 'header',
      'field_title_position_single' => 'header',
      'field_authors' => 'left',
      'field_tag' => 'left',
      'field_profile_photo' => 'right',
      'field_location' => 'right',
      'field_program_unlimited' => 'right',
      'field_academic_degrees_unlimited' => 'right',
      'field_alumni_story' => 'right',
      'field_program_attended' => 'right',
      'field_related_programs' => 'right',
      'field_professional_experience' => 'right',
      'field_profile_links' => 'right',
      'field_industry' => 'right',
      'field_field_of_study' => 'right',
      'field_region_of_interest' => 'right',
      'field_related_other_unlimited' => 'right',
      'field_alumni_directory_link' => 'right',
      'field_link_unlimited' => 'right',
      'field_person_ref_unlimited' => 'right',
      'gsb_feature_base_fields_faculty_authors' => 'right',
      'field_person_type' => 'right',
      'field_person_type_execed' => 'right',
      'field_file_unlimited_public' => 'right',
      'field_voices_path' => 'right',
      'field_person_fac_single_ref' => 'right',
      'field_related_idea_story' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|voices|default'] = $ds_layout;

  return $export;
}
