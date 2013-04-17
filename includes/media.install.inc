<?php

function _gsb_public_setup_media() {

  /**
   * Media Center Browser Plugins
   */

  // Change the default browser plugins for media center.
  $browser_plugins = array(
    'gsb_media_center_image',
    'gsb_media_center_video',
    'gsb_media_center_document',
  );
  variable_set('media__wysiwyg_browser_plugins', $browser_plugins);

  /**
   * Add sections field.
   */
  /** Section field and instance **/

  // Define the sections field.
  $sections_field = array(
    'active' => '1',
    'cardinality' => '-1',
    'deleted' => '0',
    'entity_types' => array(),
    'field_name' => 'field_sections',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => '0',
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'workbench_sections',
          'parent' => '0',
        ),
      ),
    ),
    'translatable' => '0',
    'type' => 'taxonomy_term_reference',
  );

  // As long as the sections field doesn't already exist create it.
  if (!field_info_field($sections_field['field_name'])) {
    field_create_field($sections_field);
  }

  // Define the alt text instance.
  $sections_instance = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'gsb_slideshow' => array(
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
      'link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => '-2',
    ),
    'workbench_access_field' => 0,
  );

  // As long as the image sections instance doesn't already exist create it.
  if (!field_info_instance($sections_instance['entity_type'], $sections_instance['field_name'], $sections_instance['bundle'])) {
    field_create_instance($sections_instance);
  }

  // video
  $sections_instance['bundle'] = 'video';

  // As long as the video sections instance doesn't already exist create it.
  if (!field_info_instance($sections_instance['entity_type'], $sections_instance['field_name'], $sections_instance['bundle'])) {
    field_create_instance($sections_instance);
  }

  // audio
  $sections_instance['bundle'] = 'audio';

  // As long as the audio sections instance doesn't already exist create it.
  if (!field_info_instance($sections_instance['entity_type'], $sections_instance['field_name'], $sections_instance['bundle'])) {
    field_create_instance($sections_instance);
  }

  // document
  $sections_instance['bundle'] = 'document';

  // As long as the document sections instance doesn't already exist create it.
  if (!field_info_instance($sections_instance['entity_type'], $sections_instance['field_name'], $sections_instance['bundle'])) {
    field_create_instance($sections_instance);
  }
}
