<?php

function _gsb_public_setup_taxonomy() {
  /**
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
    'centers_research_programs' => array(
      'name' => 'Centers and Research Programs',
      'description' => t(''),
      'terms' => array(
        'CSI',
        'CES',
        'CLDR',
        'CGBE',
        'PHI',
        'SC Forum',
        'SPRIE',
        'SEED',
        'STEYER-TAYLOR',
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
    'department' => array(
      'name' => 'Department',
      'description' => t(''),
      'terms' => array(
        'Executive Education Admissions',
        'MBA Admissions',
        'MSx Admissions',
        'PhD Admissions',
      ),
    ),
    'discipline' => array(
      'name' => 'Discipline',
      'description' => t(''),
      'terms' => array(
        'Accounting' => array(
          'Auditing',
          'Budgeting',
          'Cost Accounting',
        ),
        'Business & Society' => array(
          'Business Ethics',
          'Corporate Social Responsibility',
          'Demographics',
          'Sustainable Development',
          'Work & Family',
        ),
        'Change' => array(
          'Innovation',
          'Organizational Change',
          'Technological Change',
          'Transitions & Renewals',
          'Resilience',
        ),
        'Economics' => array(
          'Behavioral Economics',
          'Development Economics',
          'Econometrics',
          'Economic History',
          'Economic Systems',
          'Environmental Economics',
          'Labor Economics',
          'Macroeconomics',
          'Managerial Economics',
          'Microeconomics',
        ),
        'Entrepreneurship' => array(
          'Social Entrepreneurship',
        ),
        'Finance' => array(
          'Behavioral Finance',
          'Corporate Finance',
          'Financial Markets',
          'Personal Finance',
          'Public Finance',
          'Venture Capital & Private Equity',
        ),
        'Global Business' => array(
          'Emerging Markets',
          'Frontier Markets',
          'Globalization',
          'International Trade',
          'National Culture',
          'National Economies',
        ),
        'Management & Organizations' => array(
          'Corporate Governance',
          'Human Resources Management',
          'Leadership',
          'Organizational Behavior',
          'Public Management',
          'Strategic Management',
        ),
        'Marketing' => array(
          'Branding',
          'Consumer Behavior',
          'Customer Relationship Management',
          'Market Research',
          'Product Management',
          'R&D',
          'Sales Management',
        ),
        'Operations' => array(
          'Information & Technology',
          'Management Science',
          'Manufacturing',
          'Operational Research',
          'Supply Chain Management',
        ),
        'Political Economics' => array(
          'Government & Politics',
          'Law & Public Policy',
        ),
      ),
    ),
    'event_category' => array(
      'name' => 'Event Category',
      'description' => t(''),
      'terms' => array(
        'Academic Calendar',
        'Admissions Events',
        'Alumni',
        'Conferences',
        'Diverse Communities',
        'Info Session',
        'On-campus',
        'Online Events',
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
      'terms' => array(
        'Construction',
        'Consumer' => array(
          'Apparel',
          'Beverages',
          'Consumer Electronics',
          'Food',
          'Household Products',
          'Restaurants & Bars',
          'Retail Stores',
        ),
        'Education',
        'Energy' => array(
          'Coal',
          'Oil & Gas',
          'Renewable Energy',
          'Utilities',
        ),
        'Financial Services' => array(
          'Banking',
          'Insurance',
          'Investment Services',
        ),
        'Health Care' => array(
          'Biotechnology',
          'Health Care Providers',
          'Medical Devices',
          'Pharmaceuticals',
        ),
        'Media & Entertainment' => array(
          'Entertainment',
          'Media',
          'Publishing',
        ),
        'Nonprofit' => array(
          'Philanthropy',
        ),
        'Professional & Business Services' => array(
          'Business Support Services',
          'Employment Services',
          'Environmental Services',
          'Professional Services',
        ),
        'Public Sector',
        'Real Estate',
        'Recreation' => array(
          'Casinos & Gaming',
          'Leisure',
          'Sports',
          'Toy',
        ),
        'Technology' => array(
          'Information Technology',
          'Internet',
          'Nanotechnology',
          'Robotics',
          'Semiconductors',
          'Telecommunications',
        ),
        'Travel',
        'Transportation' => array(
          'Airlines',
          'Automotive',
          'Rail',
        ),
      ),
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
      'terms' => array(
        'Africa' => array(
          'Eastern Africa' => array(
            'Burundi',
            'Comoros',
            'Djibouti',
            'Eritrea',
            'Ethiopia',
            'Kenya',
            'Madagascar',
            'Malawi',
            'Mauritius',
            'Mayotte',
            'Mozambique',
            'Rwanda',
            'Seychelles',
            'Somalia',
            'Tanzania',
            'Uganda',
            'Zambia',
            'Zimbabwe',
          ),
          'Middle Africa' => array(
            'Angola',
            'Cameroon',
            'Central African Republic',
            'Chad',
            'Congo (Brazzaville)',
            'Congo (Democratic Republic)',
            'Equatorial Guinea',
            'Gabon',
            'Sao Tome and Principe',
          ),
          'Northern Africa' => array(
            'Algeria',
            'Egypt',
            'Libya',
            'Morocco',
            'South Sudan',
            'Sudan',
            'Tunisia',
            'Western Sahara',
          ),
          'Southern Africa' => array(
            'Botswana',
            'Lesotho',
            'Namibia',
            'South Africa',
            'Swaziland',
          ),
          'Western Africa' => array(
            'Benin',
            'Burkina Faso',
            'Cape Verde',
            'Cote d\'Ivoire',
            'Gambia',
            'Ghana',
            'Guinea',
            'Guinea-Bissau',
            'Liberia',
            'Mali',
            'Mauritania',
            'Niger',
            'Nigeria',
            'Saint Helena',
            'Senegal',
            'Sierra Leone',
            'Togo',
          ),
        ),
        'Americas' => array(
          'Caribbean' => array(
            'Anguilla',
            'Antigua and Barbuda',
            'Aruba',
            'Bahamas',
            'Barbados',
            'British Virgin Islands',
            'Cayman Islands',
            'Cuba',
            'Dominica',
            'Dominican Republic',
            'Grenada',
            'Guadeloupe',
            'Haiti',
            'Jamaica',
            'Martinique',
            'Montserrat',
            'Puerto Rico',
            'Saint Kitts and Nevis',
            'Saint Lucia',
            'Saint Vincent and the Grenadines',
            'Sint Maarten (Dutch part)',
            'Trinidad and Tobago',
            'Turks and Caicos Islands',
            'United States Virgin Islands',
          ),
          'Central America' => array(
            'Belize',
            'Costa Rica',
            'El Salvador',
            'Guatemala',
            'Honduras',
            'Mexico',
            'Nicaragua',
            'Panama',
          ),
          'South America' => array(
            'Argentina',
            'Bolivia',
            'Brazil',
            'Chile',
            'Colombia',
            'Ecuador',
            'Falkland Islands (Malvinas)',
            'French Guiana',
            'Guyana',
            'Paraguay',
            'Peru',
            'Suriname',
            'Uruguay',
            'Venezuela (Bolivarian Republic of)',
          ),
          'Northern America' => array(
            'Bermuda',
            'Canada',
            'Greenland',
            'Saint Pierre and Miquelon',
            'United States of America',
          ),
        ),
        'Asia' => array(
          'Central Asia' => array(
            'Kazakhstan',
            'Kyrgyzstan',
            'Tajikistan',
            'Turkmenistan',
            'Uzbekistan',
          ),
          'Eastern Asia' => array(
            'China',
            'Hong Kong',
            'Macao',
            'Japan',
            'Mongolia',
            'North Korea',
            'South Korea',
            'Taiwan',
          ),
          'Southern Asia' => array(
            'Afghanistan',
            'Bangladesh',
            'Bhutan',
            'India',
            'Iran (Islamic Republic of)',
            'Maldives',
            'Nepal',
            'Pakistan',
            'Sri Lanka',
          ),
          'South-Eastern Asia' => array(
            'Brunei Darussalam',
            'Cambodia',
            'Indonesia',
            'Laos',
            'Malaysia',
            'Myanmar',
            'Philippines',
            'Singapore',
            'Thailand',
            'Timor-Leste',
            'Vietnam',
          ),
          'Western Asia' => array(
            'Armenia',
            'Azerbaijan',
            'Bahrain',
            'Cyprus',
            'Georgia (Republic)',
            'Iraq',
            'Israel',
            'Jordan',
            'Kuwait',
            'Lebanon',
            'Gaza Strip',
            'Oman',
            'Qatar',
            'Saudi Arabia',
            'Syrian Arab Republic',
            'Turkey',
            'United Arab Emirates',
            'Yemen',
            'West Bank of the Jordan River',
          ),
        ),
        'Europe' => array(
          'Eastern Europe' => array(
            'Belarus',
            'Bulgaria',
            'Czech Republic',
            'Hungary',
            'Moldova',
            'Poland',
            'Romania',
            'Russia',
            'Slovakia',
            'Ukraine',
          ),
          'Northern Europe' => array(
            'Denmark',
            'England',
            'Estonia',
            'Faeroe Islands',
            'Finland',
            'Iceland',
            'Ireland',
            'Latvia',
            'Lithuania',
            'Northern Ireland',
            'Norway',
            'Scotland',
            'Sweden',
            'United Kingdom',
            'Wales',
          ),
          'Southern Europe' => array(
            'Albania',
            'Andorra',
            'Bosnia and Herzegovina',
            'Croatia',
            'Gibraltar',
            'Greece',
            'Italy',
            'Macedonia',
            'Malta',
            'Montenegro',
            'Portugal',
            'San Marino',
            'Serbia',
            'Slovenia',
            'Spain',
          ),
          'Western Europe' => array(
            'Austria',
            'Belgium',
            'France',
            'Germany',
            'Liechtenstein',
            'Luxembourg',
            'Monaco',
            'Netherlands',
            'Switzerland',
          ),
        ),
        'Oceania' => array(
          'Australia and New Zealand' => array(
            'Australia',
            'New Zealand',
            'Norfolk Island',
          ),
          'Melanesia' => array(
            'Fiji',
            'New Caledonia',
            'Papua New Guinea',
            'Solomon Islands',
            'Vanuatu',
          ),
          'Micronesia' => array(
            'Guam',
            'Kiribati',
            'Marshall Islands',
            'Micronesia (Federated States of)',
            'Nauru',
            'Northern Mariana Islands',
            'Palau',
          ),
          'Polynesia' => array(
            'American Samoa',
            'Cook Islands',
            'French Polynesia',
            'Niue',
            'Pitcairn',
            'Samoa',
            'Tokelau',
            'Tonga',
            'Tuvalu',
            'Wallis and Futuna Islands',
          ),
        ),
      ),
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

  /*******************************************************************
   * This is temporary until we are done so devs don't have to suffer.
   *******************************************************************/
  /**$vocabularies['academic_area']['terms'] = array();
  $vocabularies['centers_research_programs']['terms'] = array();
  $vocabularies['department']['terms'] = array();
  $vocabularies['discipline']['terms'] = array();
  $vocabularies['event_category']['terms'] = array();
  $vocabularies['industry']['terms'] = array();
  $vocabularies['program']['terms'] = array();
  $vocabularies['region']['terms'] = array();
  $vocabularies['target_audience']['terms'] = array();**/
/**
  foreach ($vocabularies as $machine_name => $info) {
    $vocabulary = (object) array(
      'machine_name' => $machine_name,
      'name' => $info['name'],
      'description' => $info['description'],
    );
    taxonomy_vocabulary_save($vocabulary);

    _gsb_public_taxonomy_terms_process($info['terms'], $vocabulary);
  }
  **/
  backup_migrate_include('crud');
  backup_migrate_perform_restore('cc5f668fd558e415d1b8564e7d17b3cb', 'taxonomy.sql');

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
function _gsb_public_taxonomy_terms_process($terms, $vocabulary, $parent_tid = NULL) {
  // Loop through our terms
  foreach($terms as $index => $info) {
    // If index is an integer then the name will be info.
    // Otherwise it's index.
    $name = (is_int($index)) ? $info : $index;

    // Build our term object.
    $term = (object) array(
      'vid' => $vocabulary->vid,
      'name' => $name,
      'vocabulary_machine_name' => $vocabulary->machine_name,
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
      _gsb_public_taxonomy_terms_process($info, $vocabulary, $term->tid);
    }
  }
}
