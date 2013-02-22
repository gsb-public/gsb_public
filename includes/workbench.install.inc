<?php

function _gsb_public_setup_workbench() {
  $vocabulary = (object) array(
    'name' => 'Workbench Sections',
    'machine_name' => 'workbench_sections',
    'description' => t('This holds the roles for the sections in workbench.'),
  );
  taxonomy_vocabulary_save($vocabulary);

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
