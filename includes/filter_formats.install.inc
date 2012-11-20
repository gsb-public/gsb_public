<?php

function _gsb_panopoly_setup_filter_formats() {

  // Add text formats.

  // filtered html format

  $filtered_html_format = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'weight' => 0,
    'filters' => array(
      // URL filter.
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
      ),
      // HTML filter.
      'filter_html' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<hr> <u> <object> <area> <caption> <embed> <pre> <address> <abbr> <span> <script> <iframe> <br> <p> <h1> <h2> <h3> <h4> <h5> <h6> <a> <em> <strong> <cite> <blockquote> <ul> <ol> <li> <dl> <dt> <dd> <img> <table> <tbody> <thead> <th> <tr> <td> <div>',
        ),
      ),
      // Line break filter.
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
      ),
      // HTML corrector filter.
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
      ),
    ),
  );
  $filtered_html_format = (object) $filtered_html_format;
  filter_format_save($filtered_html_format);

  // full html format

  $full_html_format = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'weight' => 1,
    'filters' => array(
      // URL filter.
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
      ),
      // Line break filter.
      'filter_autop' => array(
        'weight' => 1,
        'status' => 1,
      ),
      // HTML corrector filter.
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
      ),
    ),
  );
  $full_html_format = (object) $full_html_format;
  filter_format_save($full_html_format);

  // secure html

  $secure_html_format = array(
    'format' => 'secure_html',
    'name' => 'Secure HTML',
    'weight' => 0,
    'filters' => array(
      // URL filter.
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
      ),
      // HTML filter.
      'filter_html' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<h2> <h3> <h4> <a> <em> <strong> <cite> <blockquote> <ul> <ol> <li> <dl> <dt> <dd> <img> <table> <tbody> <th> <tr> <td> <div>',
        ),
      ),
      // Line break filter.
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
      ),
      // HTML corrector filter.
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
      ),
    ),
  );
  $secure_html_format = (object) $secure_html_format;
  filter_format_save($secure_html_format);

  // Enable default permissions for system roles.

  $filter_perms = array(
    'filtered_html' => filter_permission_name($filtered_html_format),
    'secure_html' => filter_permission_name($secure_html_format),
    'full_html' => filter_permission_name($full_html_format),
  );

  return $filter_perms;
}
