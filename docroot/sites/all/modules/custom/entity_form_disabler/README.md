# Entityform Disable

This simple module allows the disabling of individual entity forms with customizable messages.

When a form is disabled, all fields and submit actions will be replaced with a message.

All settings are stored as variables, so forms can be disabled and messages set without deployments.

## Usage

Forms are disabled by their machine names. To find the machine name for a given entity form, visit `/admin/structure/entityform_types`.

Using the machine name for a form, set a Drupal variable with a user-facing message:

```
$ echo 'This form is disabled.' | drush vset efd__emediation_competition_reg -
```

Note the `efd__` prefix for the variable name.

### Default message

Disabled forms can optionally use a default message using the `{default}` token:

```
$ echo '{default}' | drush vset efd__emediation_competition_reg -
```

Use the `efd_default_message` variable to set the text for the default message:

```
$ echo 'This is the default disabled form message.' | drush vset efd_default_message -
```

Or visit `/admin/config/system/ilr-sys-messages` to update the default message via the admin UI.
