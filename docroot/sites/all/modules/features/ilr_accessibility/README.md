# ILR Accessibililty Module

This module implements some accessibility features not otherwise found in the custom theme or other modules and configuration.

Here are a few details about the included functionality:

## Image alt attribute review

An editable view is provided at `/admin/tmp/image-files-editable` for reviewing and updating the `alt` attribute of image file entities.

## Non-accessible PDF file interstitial download page

File entities of the `document` type now have an 'Approved accessible' field that can be restricted to any role using a new 'Edit Accessilble Field' permission.

Any `document`s that are a) a PDF and b) not marked as accessible will redirect users to a page at an alternate hostname (see below for configuration) with a notice with contact info and the actual download link.

The alternate hostname (`https://archive.ilr.cornell.edu` by default) should point to the same docroot as the canonical hostname.

To test (or update the alternate hostnames), you can set the following two variables. Below is an example using the `$conf` variable in `settings.local.php`, but you can alternatively use `drush vset`.

```
$conf['ilr_accessibility_pdf_hostname'] = 'http://archive.ilr-website.test';
$conf['ilr_accessibility_canonical_hostname'] = 'http://www.ilr-website.test';
```

You should also ensure that the alternate and canonical hostnames point to the _same_ docroot.
