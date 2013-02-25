<?php

function _gsb_public_setup_workbench() {
  $section_id = 'workbench_sections';

  $vocabulary = (object) array(
    'name' => 'Workbench Sections',
    'machine_name' => $section_id,
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
    'bundle' => $section_id,
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
    'active' => '1',
    'cardinality' => '1',
    'deleted' => '0',
    'entity_types' => array(),
    'field_name' => 'field_workbench_section_use_menu',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'label' => 'Use a menu for this section.',
    'locked' => '0',
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => '0',
    'type' => 'list_boolean',
  );
  field_create_field($field);

  // Attach the field to our taxonomy entity
  $instance = array(
    'bundle' => 'workbench_sections',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => 'If checked a menu will be created for this section. If you uncheck this after it has been checked the menu will not be deleted. It will have to be manually deleted.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_workbench_section_use_menu',
    'label' => 'Use a menu for this section.',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );
  field_create_instance($instance);

  $variables = array(
    'workbench_access' => 'taxonomy',
    'workbench_access_allow_multiple' => 1,
    'workbench_access_auto_assign' => 1,
    'workbench_access_label' => 'Section',
    'workbench_access_taxonomy' => array(
      $section_id => $section_id
    ),
  );
  _gsb_public_variable_set_multiple($variables);

  $term = (object) array(
    'vid' => $vocabulary->vid,
    'name' => 'Administrators',
    'description' => t('Administrators of the site.'),
  );
  taxonomy_term_save($term);

  $record = array(
    'access_id' => $section_id,
    'access_scheme' => 'taxonomy',
    'access_type' => 'taxonomy',
    'access_type_id' => $section_id,
  );
  workbench_access_section_save($record);

  $record = array(
    'access_id' => $term->tid,
    'access_scheme' => 'taxonomy',
    'access_type' => 'taxonomy',
    'access_type_id' => $section_id,
  );
  workbench_access_section_save($record);

  $roles = user_roles();
  $rid = array_search('administrator', $roles);
  // Add role to workbench access section.
  workbench_access_role_section_save($rid, $term->tid, 'taxonomy');

  // Remove the needs_review state.
  $state = new stdClass();
  $state->name = 'needs_review';
  workbench_moderation_state_delete($state);
}
