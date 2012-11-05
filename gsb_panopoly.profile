<?php

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function gsb_panopoly_profile_form_install_configure_form_alter(&$form, $form_state) {
  $form['site_information']['site_name']['#default_value'] = 'GSB Panopoly Profile';
  $form['site_information']['site_mail']['#default_value'] = 'admin@example.com';
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'admin@example.com';
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
}

/**
 * Implements hook_install_tasks()
 */
function gsb_panopoly_profile_install_tasks(&$install_state) {

  // Add the Panopoly app selection to the installation process
  require_once(drupal_get_path('module', 'apps') . '/apps.profile.inc');
  $tasks = $tasks + apps_profile_install_tasks( $install_state
                                              , array( 'machine name' => 'panopoly'
                                                     , 'default apps' => array('panopoly_demo')));
}