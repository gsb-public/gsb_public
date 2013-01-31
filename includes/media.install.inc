<?php

function _gsb_public_setup_media() {
  /**
   * Configure Video Displays
   */

  /*** Default ***/

  // Vimeo
  $settings = array(
    'width' => 627,
    'height' => 353,
    'autoplay' => 0,
  );
  _gsb_public_media_save_display(array('file_type' => 'video', 'view_mode' => 'default', 'formatter_name' => 'media_vimeo_video', 'settings' => $settings));

  // Youtube
  $settings = array(
    'theme' => 'dark',
    'width' => 627,
    'height' => 353,
    'fullscreen' => 1,
    'autoplay' => 0,
    'related' => 0,
    'hd' => 1,
    'showsearch' => 0,
    'modestbranding' => 0,
    'showinfo' => 1,
    'chromeless' => 0,
  );
  _gsb_public_media_save_display(array('file_type' => 'video', 'view_mode' => 'default', 'formatter_name' => 'media_youtube_video', 'settings' => $settings));

  /*** Preview ***/

  // Vimeo
  $settings = array(
    'image_style' => 'gsb_image_small',
  );
  _gsb_public_media_save_display(array('file_type' => 'video', 'view_mode' => 'preview', 'formatter_name' => 'media_vimeo_image', 'settings' => $settings));

  // Youtube
  $settings = array(
    'image_style' => 'gsb_image_small',
  );
  _gsb_public_media_save_display(array('file_type' => 'video', 'view_mode' => 'preview', 'formatter_name' => 'media_youtube_image', 'settings' => $settings));

}

/**
 * Saves a file display based on the settings given.
 */
function _gsb_public_media_save_display($options) {
  $displays = file_displays_load($options['file_type'], $options['view_mode'], TRUE);
  $display = isset($displays[$options['formatter_name']]) ? $displays[$options['formatter_name']] : file_display_new($options['file_type'], $options['view_mode'], $options['formatter_name']);
  $display->status = TRUE;
  $settings = (array) $display->settings;
  $settings += $options['settings'];
  $display->settings = $settings;
  file_display_save((object) $display);
}
