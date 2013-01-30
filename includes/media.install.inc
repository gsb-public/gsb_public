<?php

function _gsb_public_setup_media() {
  /**
   * Configure Image Displays
   */

  /*** Default ***/

  // File Image
  $display = file_display_new('image', 'default', 'file_image');
  $display->status = TRUE;
  $display->settings += array(
    'image_style' => 'gsb_image_large',
    'alt' => '[file:field_file_image_alt_text]',
    'title' => '[file:field_file_image_title_text]',
  );
  file_display_save((object) $display);

  /*** Preview ***/

  // File Image
  $display = file_display_new('image', 'preview', 'file_image');
  $display->status = TRUE;
  $display->settings += array(
    'image_style' => 'gsb_image_small',
    'alt' => '[file:field_file_image_alt_text]',
    'title' => '[file:field_file_image_title_text]',
  );
  file_display_save((object) $display);

  /**
   * Configure Video Displays
   */

  /*** Default ***/

  // Vimeo
  $display = file_display_new('video', 'default', 'media_vimeo_video');
  $display->status = TRUE;
  $display->settings += array(
    'width' => 627,
    'height' => 353,
    'autoplay' => 0,
  );
  file_display_save((object) $display);

  // Youtube
  $display = file_display_new('video', 'default', 'media_youtube_video');
  $display->status = TRUE;
  $display->settings += array(
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
  file_display_save((object) $display);

  /*** Preview ***/

  // Vimeo
  $display = file_display_new('video', 'preview', 'media_vimeo_image');
  $display->status = TRUE;
  $display->settings += array(
    'image_style' => 'gsb_image_small',
  );
  file_display_save((object) $display);

  // Youtube
  $display = file_display_new('video', 'preview', 'media_youtube_image');
  $display->status = TRUE;
  $display->settings += array(
    'image_style' => 'gsb_image_small',
  );
  file_display_save((object) $display);
}
