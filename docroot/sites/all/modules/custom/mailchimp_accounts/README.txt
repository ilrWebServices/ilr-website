Integrate your Drupal entities with multiple MailChimp accounts. This is an experimental module, so please use with caution.

## Installation

1. Enable the MailChimp Accounts module.
2. Make sure you have a recent version of the MailChimp Module, which includes support for multiple API keys.

## Usage

1. Get the account ids any additional accounts you want to use at admin/config/services/mailchimp/account-info.
2. Register additional account keys using hook_mailchimp_accounts_api_info().
3. Clear cache.
4. You can now select which account to use for configuration from the general MailChimp settings page (admin/config/services/mailchimp/).

## Notes

1. Currently, this module has only been tested with signup forms and automations.
2. During installation, this module updates the schema for mailchimp_automations, but only if it's enabled. If you enable that module at a later date, you will need to update the schema for automations accordingly.
