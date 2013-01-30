<?php

function _gsb_public_setup_image_styles() {
  // Declare our image styles
  $image_styles = array(
    'gsb_image_square' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '170',
          'height' => '170',
        ),
      ),
    ),
    'gsb_image_small' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '270',
          'height' => '158',
        ),
      ),
    ),
    'gsb_image_large' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '627',
          'height' => '367',
        ),
      ),
    ),
    'gsb_homepage_carousel' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '542',
          'height' => '261',
        ),
      ),
    ),
    'gsb_homepage_evergreen' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '566',
          'height' => '396',
        ),
      ),
    ),
    'gsb_homepage_social_feed_events' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '263',
          'height' => '396',
        ),
      ),
    ),
  );

  // Loop through the image styles and add them.
  foreach ($image_styles as $name => $effects) {
    $style = image_style_save(array('name' => $name));
    foreach ($effects as $effect) {
      $effect['isid'] = $style['isid'];
      image_effect_save($effect);
    }
  }
}
