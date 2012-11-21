<?php

function _gsb_public_setup_siteinfo() {
  $variables = array(
    'default_nodes_main' => '10',
    'site_403' => '',
    'site_404' => '',
    'site_default_country' => 'US',
    'site_frontpage' => 'node',
    'site_mail' => 'thisemailneedstochangefrom@example.com',
    'site_name' => 'Revamp',
    'site_slogan' => 'Change lives. Change organizations. Change the world.',
  );

  _gsb_public_variable_set_multiple($variables);
}
