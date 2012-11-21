<?php

function _gsb_public_setup_filter_formats() {

  // update the panopoly

  $format = filter_format_load('panopoly_wysiwyg_text');

  // Work-around for what *seems* to be a bug somewhere in Drupal filter
  // format loading/saving.  There's probably a better way, but this seems to work.

  if (empty($format->filters)) {

    // Get the filters used by this format.
    $filters = filter_list_format($format->format);

    // Build the $format->filters array...
    $format->filters = array();
    foreach($filters as $name => $filter) {
      foreach($filter as $k => $v) {
        $format->filters[$name][$k] = $v;
      }
    }

  }

  $format->filters["wysiwyg"]["settings"]["valid_elements"] =
    "a[!href|target<_blank|title|style],\n" .
    "div[style|class|align<center?justify?left?right],\n" .
    "p,br,em,i,strong,u,cite,blockquote,hr,ul,ol,li,dl,dt,dd,\n" .
    "table,tbody,thead,th,tr,td,\n" .
    "span[style],p[style|class],\n" .
    "h1,h2,h3,h4,h5,h6,\n" .
    "object,iframe,area,embed,\n" .
    "address,abbr,caption,pre,code,script,\n" .
    "img[!src|title|alt|style|width|height|class|hspace|vspace],\n" .
    "@[style]";

  // Save the panopoly wysiwyg format.
  filter_format_save($format);

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

  // Enable default permissions for system roles.

  $filter_perms = array(
    'full_html' => filter_permission_name($full_html_format),
  );

  return $filter_perms;
}
