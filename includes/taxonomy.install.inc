<?php

function _gsb_public_setup_taxonomy() {
  $vocabularies = array(
    'academic_area' => array(
      'name' => 'Academic Area',
      'description' => t(''),
      'terms' => array(
        'Accounting',
        'Economics',
        'Finance',
        'Marketing',
        'Operations, Information & Technology',
        'Organizational Behavior',
        'Political Economy',
      ),
    ),
    'business_insight_topic' => array(
      'name' => 'Business Insight Topic',
      'description' => t(''),
      'terms' => array(
        'Business & Society',
        'Consumer',
        'Education',
        'Energy',
        'Entrepreneurship',
        'Finance & Economics',
        'Global Business',
        'Health Care',
        'Leadership',
        'Management & Organizations',
        'Marketing',
        'Media & Entertainment',
        'Nonprofit',
        'Operations',
        'Public Sector',
        'Technology',
        'Transportation',
      ),
    ),
    'club_category' => array(
      'name' => 'Club Category',
      'description' => t(''),
      'terms' => array(
        'Administrative Committee',
        'Athletic',
        'Diversity',
        'Industry/Career',
        'International',
        'Social',
        'Student Government',
      ),
    ),
    'company_organization' => array(
      'name' => 'Company/Organization',
      'description' => t(''),
      'terms' => array(),
    ),
    'discipline' => array(
      'name' => 'Discipline',
      'description' => t(''),
      'terms' => array(),
    ),
    'event_category' => array(
      'name' => 'Event Category',
      'description' => t(''),
      'terms' => array(
        'Academic Calendar',
        'Admissions Events' => array(
          'Executive Education',
          'MBA',
          'MSx',
          'PhD',
        ),
        'Alumni',
        'Conferences',
        'Info Session',
        'On-campus Events',
        'Seminars',
        'Speakers',
        'Workshops',
      ),
    ),
    'event_series' => array(
      'name' => 'Event Series',
      'description' => t(''),
      'terms' => array(),
    ),
    'industry' => array(
      'name' => 'Industry',
      'description' => t(''),
      'terms' => array(),
    ),
    'program' => array(
      'name' => 'Program',
      'description' => t(''),
      'terms' => array(
        'Executive Education',
        'MBA',
        'MSx',
        'PhD',
        'SEED Program',
        'SIGM',
        'Social Innovation Program',
        'Stanford Ignite',
      ),
    ),
    'region' => array(
      'name' => 'Region',
      'description' => t(''),
      'terms' => array(),
    ),
    'tag' => array(
      'name' => 'Tag',
      'description' => t(''),
      'terms' => array(),
    ),
    'target_audience' => array(
      'name' => 'Target Audience',
      'description' => t(''),
      'terms' => array(
        'All',
        'Alumni',
        'Faculty',
        'Public',
        'Staff',
        'Stanford Community',
        'Students',
      ),
    ),
  );

  foreach ($vocabularies as $machine_name => $info) {
    $vocabulary = (object) array(
      'machine_name' => $machine_name,
      'name' => $info['name'],
      'description' => $info['description'],
    );
    taxonomy_vocabulary_save($vocabulary);

    _gsb_public_taxonomy_terms_process($info['terms'], $vocabulary->vid);
  }
}

/**
 * Adds an array of terms including hierarchy.
 *
 * @param $terms
 *   An array of terms.
 * @param $vid
 *   Vocabulary ID.
 * @param $parent_tid
 *   The parent terms ID.
 */
function _gsb_public_taxonomy_terms_process($terms, $vid, $parent_tid = NULL) {
  // Loop through our terms
  foreach($terms as $index = > $info) {
    // If index is an integer then the name will be info.
    // Otherwise it's index.
    if (is_int($index)) {
      $name = $info;
    }
    else {
      $name = $index;
    }

    // Build our term object.
    $term = (object) array(
      'vid' => $vid,
      'name' => $name,
    );

    // If there is a parent_tid then add it.
    if (!is_null($parent_tid)) {
      $term->parent = $parent_tid;
    }

    // Save our term.
    taxonomy_term_save($term);

    // If info is an array we have a hierarchy so let's pass that through to
    // this function.
    if (is_array($info)) {
      _gsb_public_taxonomy_term_process($info, $vid, $term->tid);
    }
  }
}
