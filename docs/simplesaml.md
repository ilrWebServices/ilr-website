# SimpleSAMLphp Configuration

## Enabling for Vagrant

As of May, 2016, NetID logins should be supported by default when you create your virtual environment.

If you run into issues, you can test the configuration via the admin tool at `/simplesaml`:

1. Click on the "Authentication" tab
2. Click "Test configured authentication sources"
3. Choose "Cornell"
4. Sign in with a valid NetID
5. You should reach a page with "Your Attributes" listed in a table

## Gotchas
1. If you get an error and you are still attempting to configure the service, create a file in the /tmp folder of the virtual machine with:
    $ vagrant ssh
    $ cd /tmp
    $ touch simplesamlsessions.sqlite
    $ exit
2. The services is slightly fussy around long-running processes in Vagrant. You may need to `vagrant reload` if you already have the login service working but it suddenly stops (generally, I've had to do this roughly once a week).
3. The NetID login process will issue an SSL warning until a working SSL Certificate has been [uploaded to Acquia](/docs/acquia_ssl.md)
