# SimpleSAMLphp Configuration

## Enabling for Vagrant

1. Download and install the ILR [Vagrant Development VM](https://github.com/ilrWebServices/vagrant-development-vm/) if you haven't already.
2. `$ vagrant ssh`
3. `$ sudo apt-get install php5-sqlite`
4. `$ sudo apt-get install sqlite`
5. `$ exit`
6. `$ vagrant reload`

At this point, simplesaml should be configured on the server, which you can test at the ILR dev site `/simplesaml/` path:

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
