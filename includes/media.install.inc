<?php

function _gsb_public_setup_media() {
  /**
   * Configure Image Displays
   */

  /*** Default ***/

  // File Image
  $settings = array(
    'image_style' => 'gsb_image_large',
    'alt' => '[file:field_file_image_alt_text]',
    'title' => '[file:field_file_image_title_text]',
  );
  _gsb_public_media_save_display(array('file_type' => 'image', 'view_mode' => 'default', 'formatter' => 'file_image', 'settings' => $settings));

  /*** Preview ***/

  // File Image
  $settings = array(
    'image_style' => 'gsb_image_small',
    'alt' => '[file:field_file_image_alt_text]',
    'title' => '[file:field_file_image_title_text]',
  );
  _gsb_public_media_save_display(array('file_type' => 'image', 'view_mode' => 'preview', 'formatter' => 'file_image', 'settings' => $settings));

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
  _gsb_public_media_save_display(array('file_type' => 'video', 'view_mode' => 'default', 'formatter' => 'media_vimeo_video', 'settings' => $settings));

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
  _gsb_public_media_save_display(array('file_type' => 'video', 'view_mode' => 'default', 'formatter' => 'media_youtube_video', 'settings' => $settings));

  /*** Preview ***/

  // Vimeo
  $settings = array(
    'image_style' => 'gsb_image_small',
  );
  _gsb_public_media_save_display(array('file_type' => 'video', 'view_mode' => 'preview', 'formatter' => 'media_vimeo_image', 'settings' => $settings));

  // Youtube
  $settings = array(
    'image_style' => 'gsb_image_small',
  );
  _gsb_public_media_save_display(array('file_type' => 'video', 'view_mode' => 'preview', 'formatter' => 'media_youtube_image', 'settings' => $settings));

}

/**
 * Saves a file display based on the settings given.
 */
function _gsb_public_media_save_display($options) {
  $display = file_display_new($options['file_type'], $options['view_mode'], $options['formatter_name']);
  $display->status = TRUE;
  $settings = (array) $display->settings;
  $settings += $options['settings'];
  $display->settings = $settings;
  file_display_save((object) $display);
}
