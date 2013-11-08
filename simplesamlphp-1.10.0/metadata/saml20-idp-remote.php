<?php
/**
 * SAML 2.0 remote IdP metadata for simpleSAMLphp.
 *
 * Remember to remove the IdPs you don't use from this file.
 *
 * See: https://rnd.feide.no/content/idp-remote-metadata-reference
 */

$metadata['https://shibidp.cit.cornell.edu/idp/shibboleth'] = array (
	'name' => array(
		'en' => 'Cornell University',
	),
  'entityid' => 'https://shibidp.cit.cornell.edu/idp/shibboleth',
  'contacts' =>
  array (
  ),
  'metadata-set' => 'saml20-idp-remote',
  'SingleSignOnService' =>
  array (
    0 =>
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://shibidp.cit.cornell.edu/idp/profile/SAML2/POST/SSO',
    ),
    1 =>
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST-SimpleSign',
      'Location' => 'https://shibidp.cit.cornell.edu/idp/profile/SAML2/POST-SimpleSign/SSO',
    ),
    2 =>
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
      'Location' => 'https://shibidp.cit.cornell.edu/idp/profile/SAML2/Redirect/SSO',
    ),
    3 =>
    array (
      'Binding' => 'urn:mace:shibboleth:1.0:profiles:AuthnRequest',
      'Location' => 'https://shibidp.cit.cornell.edu/idp/profile/Shibboleth/SSO',
    ),
  ),
  'SingleLogoutService' =>
  array (
  ),
  'ArtifactResolutionService' =>
  array (
    0 =>
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:SOAP',
      'Location' => 'https://shibidp.cit.cornell.edu:8443/idp/profile/SAML2/SOAP/ArtifactResolution',
      'index' => 2,
    ),
    1 =>
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:bindings:SOAP-binding',
      'Location' => 'https://shibidp.cit.cornell.edu:8443/idp/profile/SAML1/SOAP/ArtifactResolution',
      'index' => 1,
    ),
  ),
  'keys' =>
  array (
    0 =>
    array (
      'encryption' => true,
      'signing' => true,
      'type' => 'X509Certificate',
      'X509Certificate' => 'MIIDSDCCAjCgAwIBAgIVAOZ8NfBem6sHcI7F39sYmD/JG4YDMA0GCSqGSIb3DQEB
BQUAMCIxIDAeBgNVBAMTF3NoaWJpZHAuY2l0LmNvcm5lbGwuZWR1MB4XDTA5MTEy
MzE4NTI0NFoXDTI5MTEyMzE4NTI0NFowIjEgMB4GA1UEAxMXc2hpYmlkcC5jaXQu
Y29ybmVsbC5lZHUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCTURo9
90uuODo/5ju3GZThcT67K3RXW69jwlBwfn3png75Dhyw9Xa50RFv0EbdfrojH1P1
9LyfCjubfsm9Z7FYkVWSVdPSvQ0BXx7zQxdTpE9137qj740tMJr7Wi+iWdkyBQS/
bCNhuLHeNQor6NXZoBgX8HvLy4sCUb/4v7vbp90HkmP3FzJRDevzgr6PVNqWwNqp
tZ0vQHSF5D3iBNbxq3csfRGQQyVi729XuWMSqEjPhhkf1UjVcJ3/cG8tWbRKw+W+
OIm71k+99kOgg7IvygndzzaGDVhDFMyiGZ4njMzEJT67sEq0pMuuwLMlLE/86mSv
uGwO2Qacb1ckzjodAgMBAAGjdTBzMFIGA1UdEQRLMEmCF3NoaWJpZHAuY2l0LmNv
cm5lbGwuZWR1hi5odHRwczovL3NoaWJpZHAuY2l0LmNvcm5lbGwuZWR1L2lkcC9z
aGliYm9sZXRoMB0GA1UdDgQWBBSQgitoP2/rJMDepS1sFgM35xw19zANBgkqhkiG
9w0BAQUFAAOCAQEAaFrLOGqMsbX1YlseO+SM3JKfgfjBBL5TP86qqiCuq9a1J6B7
Yv+XYLmZBy04EfV0L7HjYX5aGIWLDtz9YAis4g3xTPWe1/bjdltUq5seRuksJjyb
prGI2oAv/ShPBOyrkadectHzvu5K6CL7AxNTWCSXswtfdsuxcKo65tO5TRO1hWlr
7Pq2F+Oj2hOvcwC0vOOjlYNe9yRE9DjJAzv4rrZUg71R3IEKNjfOF80LYPAFD2Sp
p36uB6TmSYl1nBmS5LgWF4EpEuODPSmy4sIV6jl1otuyI/An2dOcNqcgu7tYEXLX
C8N6DXggDWPtPRdpk96UW45huvXudpZenrcd7A==',
    ),
  ),
  'scope' =>
  array (
    0 => 'cornell.edu',
  ),
  'UIInfo' =>
  array (
    'DisplayName' =>
    array (
      'en' => 'Cornell University',
    ),
    'Description' =>
    array (
    ),
    'InformationURL' =>
    array (
    ),
    'PrivacyStatementURL' =>
    array (
    ),
  ),
);

/*
 * Guest IdP. allows users to sign up and register. Great for testing!
 */
//$metadata['https://openidp.feide.no'] = array(
//	'name' => array(
//		'en' => 'Feide OpenIdP - guest users',
//		'no' => 'Feide Gjestebrukere',
//	),
//	'description'          => 'Here you can login with your account on Feide RnD OpenID. If you do not already have an account on this identity provider, you can create a new one by following the create new account link and follow the instructions.',
//
//	'SingleSignOnService'  => 'https://openidp.feide.no/simplesaml/saml2/idp/SSOService.php',
//	'SingleLogoutService'  => 'https://openidp.feide.no/simplesaml/saml2/idp/SingleLogoutService.php',
//	'certFingerprint'      => 'c9ed4dfb07caf13fc21e0fec1572047eb8a7a4cb'
//);


/*
 * Feide, the norwegian federation. Test and production metadata.
 */
//$metadata['https://idp-test.feide.no'] = array(
//	'name' => array(
//		'en' => 'Feide Test environment',
//		'no' => 'Feide testmiljø',
//	),
//	'description'                  => 'Feide test environment (idp-test.feide.no). Authenticate with your identity from a school or university in Norway.',
//
//	'SingleSignOnService'          => 'https://idp-test.feide.no/simplesaml/saml2/idp/SSOService.php',
//	'SingleLogoutService'          => 'https://idp-test.feide.no/simplesaml/saml2/idp/SingleLogoutService.php',
//
//	'certFingerprint'              => 'fa982efdb69f26e8073c8f815a82a0c5885960a2',
//	'hint.cidr'                    => '158.38.0.0/16',
//);
//
//$metadata['https://idp.feide.no'] = array(
//	'name' => 'Feide',
//	'description' => array(
//		'en' => 'Authenticate with your identity from a school or university in Norway.',
//		'no' => 'Logg inn med din identitet fra skolen eller universitetet du er tilknyttet (i Norge).',
//	),
//	'SingleSignOnService'          => 'https://idp.feide.no/simplesaml/saml2/idp/SSOService.php',
//	'SingleLogoutService'          => 'https://idp.feide.no/simplesaml/saml2/idp/SingleLogoutService.php',
//	'certFingerprint'              => 'cde69e332fa7dd0eaa99ee0ddf06916e8942ac53',
//	'hint.cidr'                    => '158.38.0.0/16',
//);



/*
 * Wayf, the danish federation metadata.
 */
//$metadata['https://wayf.wayf.dk'] = array(
//	'name' => array(
//		'en' => 'DK-WAYF Production server',
//		'da' => 'DK-WAYF Produktionsmiljøet',
//	),
//	'description'          => 'Login with your identity from a danish school, university or library.',
//	'SingleSignOnService'  => 'https://wayf.wayf.dk/saml2/idp/SSOService.php',
//	'SingleLogoutService'  => 'https://wayf.wayf.dk/saml2/idp/SingleLogoutService.php',
//	'certFingerprint'      => 'c215d7bf9d51c7805055239f66b957d9a72ff44b'
//);
//
//$metadata['https://betawayf.wayf.dk'] = array(
//	'name' => array(
//		'en' => 'DK-WAYF Quality Assurance',
//		'da' => 'DK-WAYF Quality Assurance miljøet',
//	),
//	'description'          => 'Login with your identity from a danish school, university or library.',
//	'SingleSignOnService'  => 'https://betawayf.wayf.dk/saml2/idp/SSOService.php',
//	'SingleLogoutService'  => 'https://betawayf.wayf.dk/saml2/idp/SingleLogoutService.php',
//	'certFingerprint'      => 'c215d7bf9d51c7805055239f66b957d9a72ff44b'
//);
//
//$metadata['https://testidp.wayf.dk'] = array(
//	'name' => array(
//		'en' => 'DK-WAYF Test Server',
//		'da' => 'DK-WAYF Test Miljøet',
//	),
//	'description'          => 'Login with your identity from a danish school, university or library.',
//	'SingleSignOnService'  => 'https://testidp.wayf.dk/saml2/idp/SSOService.php',
//	'SingleLogoutService'  => 'https://testidp.wayf.dk/saml2/idp/SingleLogoutService.php',
//	'certFingerprint'      => '04b3b08bce004c27458b3e85b125273e67ef062b'
//);

