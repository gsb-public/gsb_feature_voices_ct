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
    'related_title' => array(
      'weight' => '21',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-def-at' => TRUE,
        ),
        'conditions' => array(),
      ),
    ),
    'voices_ct_background_rail' => array(
      'weight' => '23',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:5:"title";s:9:"formatter";s:26:"computed_field_unsanitized";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:21:"node:field_voices_cta";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
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
    'social_buttons_bottom' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'social_buttons_top' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
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
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_authors' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => '',
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
    'field_link_single' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<span class="share-label">Share this</span>',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'short-url-wrapper',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'short-url',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
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
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-name-field-link-unlimited',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
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
    'field_person_ref_unlimited' => array(
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
    'field_related_faculty' => array(
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
    'field_related_idea_story' => array(
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
    'field_related_other_unlimited' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
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
    'field_voices_cta' => array(
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
    'field_voices_full_name' => array(
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
    'field_background_color' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'field-name-field-background-color',
          'fis-at' => '',
          'fis-def-at' => FALSE,
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
  $ds_field->field = 'voices_ct_background_rail';
  $ds_field->label = 'Voices CT background rail';
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
  $export['voices_ct_background_rail'] = $ds_field;

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
        2 => 'voices_mobile_profile_image',
        3 => 'field_quote',
        5 => 'field_voices_full_name',
        9 => 'field_degree_year',
        10 => 'field_title_position_single',
        13 => 'field_background_color',
      ),
      'left' => array(
        4 => 'social_buttons_top',
        6 => 'field_body',
        8 => 'field_date',
        11 => 'field_authors',
        12 => 'social_buttons_bottom',
        14 => 'field_link_single',
        15 => 'field_voices_cta',
      ),
      'right' => array(
        7 => 'field_profile_photo',
        16 => 'group_wrapper_tablet_1',
        17 => 'group_wrapper_tablet_2',
        18 => 'group_wrapper_tablet_3',
        19 => 'field_location',
        20 => 'field_field_of_study',
        21 => 'group_wrapper_tablet_4',
        22 => 'field_academic_degrees_unlimited',
        23 => 'field_professional_experience',
        24 => 'field_program_attended',
        25 => 'field_alumni_directory_link',
        26 => 'related_title',
        27 => 'field_related_faculty',
        28 => 'field_profile_links',
        29 => 'voices_ct_background_rail',
        30 => 'field_person_ref_unlimited',
        31 => 'field_related_idea_story',
        32 => 'group_wrapper_related',
        33 => 'field_related_other_unlimited',
        34 => 'field_related_programs',
        35 => 'field_link_unlimited',
        36 => 'field_file_unlimited_public',
      ),
    ),
    'fields' => array(
      'group_voices_group' => 'header',
      'field_image_key_image' => 'header',
      'voices_mobile_profile_image' => 'header',
      'field_quote' => 'header',
      'social_buttons_top' => 'left',
      'field_voices_full_name' => 'header',
      'field_body' => 'left',
      'field_profile_photo' => 'right',
      'field_date' => 'left',
      'field_degree_year' => 'header',
      'field_title_position_single' => 'header',
      'field_authors' => 'left',
      'social_buttons_bottom' => 'left',
      'field_background_color' => 'header',
      'field_link_single' => 'left',
      'field_voices_cta' => 'left',
      'group_wrapper_tablet_1' => 'right',
      'group_wrapper_tablet_2' => 'right',
      'group_wrapper_tablet_3' => 'right',
      'field_location' => 'right',
      'field_field_of_study' => 'right',
      'group_wrapper_tablet_4' => 'right',
      'field_academic_degrees_unlimited' => 'right',
      'field_professional_experience' => 'right',
      'field_program_attended' => 'right',
      'field_alumni_directory_link' => 'right',
      'related_title' => 'right',
      'field_related_faculty' => 'right',
      'field_profile_links' => 'right',
      'voices_ct_background_rail' => 'right',
      'field_person_ref_unlimited' => 'right',
      'field_related_idea_story' => 'right',
      'group_wrapper_related' => 'right',
      'field_related_other_unlimited' => 'right',
      'field_related_programs' => 'right',
      'field_link_unlimited' => 'right',
      'field_file_unlimited_public' => 'right',
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
