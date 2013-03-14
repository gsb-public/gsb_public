<?php

function _gsb_public_setup_image_styles() {
  // Declare our image styles
  $image_styles = array(
    '170x170' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '170',
          'height' => '170',
        ),
      ),
    ),
    '270x158' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '270',
          'height' => '158',
        ),
      ),
    ),
    '627x367' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '627',
          'height' => '367',
        ),
      ),
    ),
    '170x100' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '170',
          'height' => '100',
        ),
      ),
    ),
    '44x44' => array(
      array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '44',
          'height' => '44',
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
