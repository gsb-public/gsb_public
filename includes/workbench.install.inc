<?php

function _gsb_public_setup_workbench() {
  $vocabulary = (object) array(
    'name' => 'Workbench Sections',
    'machine_name' => 'workbench_sections',
    'description' => t('This holds the roles for the sections in workbench.'),
  );
  taxonomy_vocabulary_save($vocabulary);

  // Create a field
  $field = array(
    'field_name' => 'field_workbench_section_path',
    'type' => 'text',
    'label' => t('Menu Location'),
  );
  field_create_field($field);

  // Attach the field to our taxonomy entity
  $instance = array(
    'field_name' => 'field_workbench_section_path',
    'entity_type' => 'taxonomy_term',
    'bundle' => 'workbench_sections',
    'label' => t('Menu Location'),
    'description' => t('The path where the menu should appear.'),
    'widget' => array(
      'type' => 'text_textfield',
      'weight' => 3
    ),
  );
  field_create_instance($instance);

  // Create a field
  $field = array(
    'field_name' => 'field_workbench_section_use_menu',
    'type' => 'list_boolean',
    'label' => t('Use a menu for this section.'),
  );
  field_create_field($field);

  // Attach the field to our taxonomy entity
  $instance = array(
    'field_name' => 'field_workbench_section_use_menu',
    'entity_type' => 'taxonomy_term',
    'bundle' => 'workbench_sections',
    'label' => t('Use a menu for this section.'),
    'description' => t('If checked a menu will be created for this section.'),
    'widget' => array(
      'type' => 'options_onoff',
      'weight' => 2
    ),
  );
  field_create_instance($instance);

  $term = (object) array(
    'vid' => $vocabulary->vid,
    'name' => 'Administrators',
    'description' => t('Administrators of the site.'),
  );
  taxonomy_term_save($term);

  $variables = array(
    'workbench_access' => 'taxonomy',
    'workbench_access_allow_multiple' => 1,
    'workbench_access_auto_assign' => 1,
    'workbench_access_label' => 'Section',
    'workbench_access_taxonomy' => array(
      'workbench_sections' => 'workbench_sections'
    ),
  );
  _gsb_public_variable_set_multiple($variables);

  // Remove the needs_review state.
  $state = new stdClass();
  $state->name = 'needs_review';
  workbench_moderation_state_delete($state);
}
