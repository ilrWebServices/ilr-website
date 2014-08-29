<?php

// Code to generate state and province lists
function _forms_statelist_options(
  $full_names=TRUE,
  $include_other=TRUE,
  $include_states=TRUE,
  $include_provinces=TRUE,
  $include_territories=TRUE) {

  $states_full_names = array(
    'Alabama' => 'Alabama',
    'Alaska' => 'Alaska',
    'Arizona' => 'Arizona',
    'Arkansas' => 'Arkansas',
    'California' => 'California',
    'Colorado' => 'Colorado',
    'Connecticut' => 'Connecticut',
    'Delaware' => 'Delaware',
    'District Of Columbia' => 'District Of Columbia',
    'Florida' => 'Florida',
    'Georgia' => 'Georgia',
    'Hawaii' => 'Hawaii',
    'Idaho' => 'Idaho',
    'Illinois' => 'Illinois',
    'Indiana' => 'Indiana',
    'Iowa' => 'Iowa',
    'Kansas' => 'Kansas',
    'Kentucky' => 'Kentucky',
    'Louisiana' => 'Louisiana',
    'Maine' => 'Maine',
    'Maryland' => 'Maryland',
    'Massachusetts' => 'Massachusetts',
    'Michigan' => 'Michigan',
    'Minnesota' => 'Minnesota',
    'Mississippi' => 'Mississippi',
    'Missouri' => 'Missouri',
    'Montana' => 'Montana',
    'Nebraska' => 'Nebraska',
    'Nevada' => 'Nevada',
    'New Hampshire' => 'New Hampshire',
    'New Jersey' => 'New Jersey',
    'New Mexico' => 'New Mexico',
    'New York' => 'New York',
    'North Carolina' => 'North Carolina',
    'North Dakota' => 'North Dakota',
    'Ohio' => 'Ohio',
    'Oklahoma' => 'Oklahoma',
    'Oregon' => 'Oregon',
    'Pennsylvania' => 'Pennsylvania',
    'Rhode Island' => 'Rhode Island',
    'South Carolina' => 'South Carolina',
    'South Dakota' => 'South Dakota',
    'Tennessee' => 'Tennessee',
    'Texas' => 'Texas',
    'Utah' => 'Utah',
    'Vermont' => 'Vermont',
    'Virginia' => 'Virginia',
    'Washington' => 'Washington',
    'West Virginia' => 'West Virginia',
    'Wisconsin' => 'Wisconsin',
    'Wyoming' => 'Wyoming',
    );

  $states_abbreviations = array(
    'AL' => 'Alabama',
    'AK' => 'Alaska',
    'AZ' => 'Arizona',
    'AR' => 'Arkansas',
    'CA' => 'California',
    'CO' => 'Colorado',
    'CT' => 'Connecticut',
    'DE' => 'Delaware',
    'DC' => 'District Of Columbia',
    'FL' => 'Florida',
    'GA' => 'Georgia',
    'HI' => 'Hawaii',
    'ID' => 'Idaho',
    'IL' => 'Illinois',
    'IN' => 'Indiana',
    'IA' => 'Iowa',
    'KS' => 'Kansas',
    'KY' => 'Kentucky',
    'LA' => 'Louisiana',
    'ME' => 'Maine',
    'MD' => 'Maryland',
    'MA' => 'Massachusetts',
    'MI' => 'Michigan',
    'MN' => 'Minnesota',
    'MS' => 'Mississippi',
    'MO' => 'Missouri',
    'MT' => 'Montana',
    'NE' => 'Nebraska',
    'NV' => 'Nevada',
    'NH' => 'New Hampshire',
    'NJ' => 'New Jersey',
    'NM' => 'New Mexico',
    'NY' => 'New York',
    'NC' => 'North Carolina',
    'ND' => 'North Dakota',
    'OH' => 'Ohio',
    'OK' => 'Oklahoma',
    'OR' => 'Oregon',
    'PA' => 'Pennsylvania',
    'RI' => 'Rhode Island',
    'SC' => 'South Carolina',
    'SD' => 'South Dakota',
    'TN' => 'Tennessee',
    'TX' => 'Texas',
    'UT' => 'Utah',
    'VT' => 'Vermont',
    'VA' => 'Virginia',
    'WA' => 'Washington',
    'WV' => 'West Virginia',
    'WI' => 'Wisconsin',
    'WY' => 'Wyoming',
    );

  $provinces_full_names = array(
    'Alberta' => 'Alberta',
    'British Columbia' => 'British Columbia',
    'Manitoba' => 'Manitoba',
    'New Brunswick' => 'New Brunswick',
    'Newfoundland' => 'Newfoundland',
    'Northwest Territories' => 'Northwest Territories',
    'Nova Scotia' => 'Nova Scotia',
    'Nunavut' => 'Nunavut',
    'Ontario' => 'Ontario',
    'Prince Edward Island' => 'Prince Edward Island',
    'Quebec' => 'Quebec',
    'Saskatchewan' => 'Saskatchewan',
    'Yukon' => 'Yukon',
    );

  $provinces_abbreviations = array(
    'AB' => 'Alberta',
    'BC' => 'British Columbia',
    'MB' => 'Manitoba',
    'NB' => 'New Brunswick',
    'NL' => 'Newfoundland and Labrador',
    'NT' => 'Northwest Territories',
    'NS' => 'Nova Scotia',
    'NU' => 'Nunavut',
    'ON' => 'Ontario',
    'PE' => 'Prince Edward Island',
    'QC' => 'Quebec',
    'SK' => 'Saskatchewan',
    'YT' => 'Yukon',
    );

  $territories_full_names = array(
    'American Samoa' => 'American Samoa',
    'Canal Zone' => 'Canal Zone',
    'Guam' => 'Guam',
    'Northern Mariana Islands' => 'Northern Mariana Islands',
    'Puerto Rico' => 'Puerto Rico',
    'United States Minor Outlying Islands' => 'United States Minor Outlying Islands',
    'Virgin Islands' => 'Virgin Islands',
    );

  $territories_abbreviations = array(
    'AS' => 'American Samoa',
    'CZ' => 'Canal Zone',
    'GU' => 'Guam',
    'MP' => 'Northern Mariana Islands',
    'PR' => 'Puerto Rico',
    'UM' => 'United States Minor Outlying Islands',
    'VI' => 'Virgin Islands',
    );

  $other = array('other' => 'Other');

  $retarray = array();

  if ($full_names) {
    if ($include_states) {
      $retarray = array_merge($retarray, $states_full_names);
    }
    if ($include_provinces) {
      $retarray = array_merge($retarray, $provinces_full_names);
    }
    if ($include_territories) {
      $retarray = array_merge($retarray, $territories_full_names);
    }
  }
  else {
    if ($include_states) {
      $retarray = array_merge($retarray, $states_abbreviations);
    }
    if ($include_provinces) {
      $retarray = array_merge($retarray, $provinces_abbreviations);
    }
    if ($include_territories) {
      $retarray = array_merge($retarray, $territories_abbreviations);
    }
  }
  if ($include_other) {
    $retarray = array_merge($retarray, $other);
  }

  return $retarray;
}
