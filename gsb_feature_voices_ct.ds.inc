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
    'voices_mobile_profile_image' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:25:"gsb_field_formatter_image";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:3:{s:10:"conditions";a:1:{i:0;a:1:{s:9:"condition";s:0:"";}}s:11:"image_style";s:13:"566x_variable";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:24:"node:field_profile_photo";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'mobile-profile-image',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'field_academic_degrees_unlimited' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_alumni_directory_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_alumni_story' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
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
    'field_field_of_study' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_file_unlimited_public' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
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
    'field_industry' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_link_unlimited' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_person_fac_single_ref' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_person_ref_unlimited' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_person_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_person_type_execed' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_professional_experience' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_profile_links' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Profile',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_profile_photo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => ' background-rail-img',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_program_attended' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_program_unlimited' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
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
    'field_region_of_interest' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_related_idea_story' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_related_other_unlimited' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_related_programs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_tag' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'ul',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => TRUE,
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
    'field_voices_path' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|voices|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function gsb_feature_voices_ct_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'voices_mobile_profile_image';
  $ds_field->label = 'Voices Mobile Profile Image';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['voices_mobile_profile_image'] = $ds_field;

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
        0 => 'group_voices_group',
        1 => 'field_image_key_image',
        2 => 'field_slideshow_style',
        3 => 'voices_mobile_profile_image',
        4 => 'field_quote',
        5 => 'field_full_name',
        7 => 'field_degree_year',
        9 => 'field_title_position_single',
      ),
      'left' => array(
        6 => 'field_body',
        8 => 'field_date',
        10 => 'field_authors',
        11 => 'field_tag',
      ),
      'right' => array(
        12 => 'field_profile_photo',
        13 => 'field_location',
        14 => 'field_program_unlimited',
        15 => 'field_academic_degrees_unlimited',
        16 => 'field_alumni_story',
        17 => 'field_program_attended',
        18 => 'field_related_programs',
        19 => 'field_professional_experience',
        20 => 'field_profile_links',
        21 => 'field_industry',
        22 => 'field_field_of_study',
        23 => 'field_region_of_interest',
        24 => 'field_related_other_unlimited',
        25 => 'field_alumni_directory_link',
        26 => 'field_link_unlimited',
        27 => 'gsb_feature_base_fields_faculty_authors',
        28 => 'field_person_ref_unlimited',
        29 => 'field_person_type',
        30 => 'field_person_type_execed',
        31 => 'field_file_unlimited_public',
        32 => 'field_voices_path',
        33 => 'field_person_fac_single_ref',
        34 => 'field_related_idea_story',
      ),
    ),
    'fields' => array(
      'group_voices_group' => 'header',
      'field_image_key_image' => 'header',
      'field_slideshow_style' => 'header',
      'voices_mobile_profile_image' => 'header',
      'field_quote' => 'header',
      'field_full_name' => 'header',
      'field_body' => 'left',
      'field_degree_year' => 'header',
      'field_date' => 'left',
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
      'gsb_feature_base_fields_faculty_authors' => 'right',
      'field_person_ref_unlimited' => 'right',
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
