<?php

function _gsb_public_setup_time_date() {

  $variables = array(
    'configurable_timezones' => 1, // Users set their own timezone
    'date_default_timezone' => 'America/Los_Angeles', // Timezone
    'date_first_day' => 0, // First day of the week will be sunday
    'empty_timezone_message' => 0, // Don't show a message to users if the timezone is empty
  );

  // Insert custom format: November 25, 2011 - 2:45pm
  db_insert('date_formats')
    ->fields(array('format' => 'F j, Y - g:ia', 'type' => 'custom', 'locked' => 0))
    ->execute();

  // Insert custom format: November 25, 2011
  db_insert('date_formats')
    ->fields(array('format' => 'F j, Y', 'type' => 'custom', 'locked' => 0))
    ->execute();

  // Insert custom format: Nov. 25, 2011 - 2:45pm
  db_insert('date_formats')
    ->fields(array('format' => 'M. j, Y - g:ia', 'type' => 'custom', 'locked' => 0))
    ->execute();

  // Insert custom format: Nov. 25, 2011
  db_insert('date_formats')
    ->fields(array('format' => 'M. j, Y', 'type' => 'custom', 'locked' => 0))
    ->execute();

  // Insert custom format: 11/25/2011
  db_insert('date_formats')
    ->fields(array('format' => 'm/d/Y', 'type' => 'custom', 'locked' => 0))
    ->execute();

  // Insert custom format: November 25, 2011 - 2:45pm
  db_insert('date_format_type')
    ->fields(array('type' => 'long_time', 'title' => 'Long With Time', 'locked' => 0))
    ->execute();

  // Insert custom format: Nov. 25, 2011 - 2:45pm
  db_insert('date_format_type')
    ->fields(array('type' => 'medium_time', 'title' => 'Medium With Time', 'locked' => 0))
    ->execute();

  // Insert custom format: 11/25/2011 - 2:45pm
  db_insert('date_format_type')
    ->fields(array('type' => 'short_time', 'title' => 'Short With Time', 'locked' => 0))
    ->execute();

  // Date Long Format
  $variables['date_format_long_time'] = 'F j, Y - g:ia';
  $variables['date_format_long'] = 'F j, Y';

  // Date Medium Format
  $variables['date_format_medium_time'] = 'M. j, Y - g:ia';
  $variables['date_format_medium'] = 'M. j, Y';

  // Date Short Format
  $variables['date_format_short_time'] = 'm/d/Y - g:ia';
  $variables['date_format_short'] = 'm/d/Y';

  _gsb_public_variable_set_multiple($variables);
}
