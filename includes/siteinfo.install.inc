<?php

function _gsb_panopoly_setup_siteinfo() {
  $variables = array(
    'site_default_country' => 'US',
    'site_mail' => 'thisemailneedstochangefrom@example.com',
    'site_name' => 'Revamp',
    'site_slogan' => 'Change lives. Change organizations. Change the world.',
  );

  _gsb_panopoly_variable_set_multiple($variables);
}
