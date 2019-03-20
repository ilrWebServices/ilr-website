# Installation

This installation guide assumes that you've already followed the [Local Dev Setup Guide](https://gist.github.com/jeffam/cc8db1a9072a56808363447e6b829c53).
  1. `git clone git@github.com:ilrWebServices/ilr-website.git`
  2. Run `composer install`.
  3. (Optional) Add a `settings.local.php` file to `docroot/sites/default/` with the following info:

```
$conf['preprocess_css'] = 0;
$conf['preprocess_js'] = 0;
error_reporting(E_ALL);
ini_set('display_errors', TRUE);
ini_set('display_startup_errors', TRUE);
```

  4. Assuming you can SSH into the production server and have the [platform cli](https://github.com/platformsh/platformsh-cli) installed, set up the project with `platform project:set-remote dd2imk5jkez6q`.
  5. Set up aliases with `platform drush-aliases`.
  6. Confirm the drush connection works with `$ drush @ilr-d7.master status`
  7. `$ cd docroot && ../bin/sync-prod`
  8. Confirm that the site loads at your local dev url,  @see [installation docs](https://gist.github.com/jeffam/cc8db1a9072a56808363447e6b829c53).
  9. If you'll be compiling the stylesheet, follow the "Simplifying CSS compilation" in the [theming readme](/docs/theming.md).
