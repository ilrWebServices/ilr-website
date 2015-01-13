# Acquia SSL Configuration

1. Go to Acquia subscription -> Cloud -> SSL
2. Click on "upload new certificate"
3. Copy PEM data
4. Go to CIT's [SSL request page](https://ssl.cit.cornell.edu/sslReq/)
5. Click on [Request SSL Certificate](https://ssl.cit.cornell.edu/sslReq/request.html)
  * Contact email: ilrweb@cornell.edu
  * Certificate Type: InCommon Multi Domain Certificate
  * Common Name: ilr.cornell.edu
  * SANs are all of the other domain names, such as webupdates.ilr.cornell.edu
  * server type: Apache/ModSSL
  * validity period: 1 year
  * paste in CSR (PEM data from above step)
  * check the agreement box
  * submit

6. Success, now wait

Cornell University SSL Certificate Request Result
Congratulations! Your request has been submitted successfully.
Once approved, your certificate will be sent to ilrweb@cornell.edu.

# Reply from CIT:

        From: Certificate Services Manager <support@cert-manager.com>
        Date: May 23, 2013 11:16:52 AM EDT
        To: requesterSSL ilr.cornell.edu <ilrweb@cornell.edu>
        Subject: Enrollment Successful - Your SSL certificate for ilr.cornell.edu is ready

        Hello,

        You have successfully enrolled for a SSL certificate.

        You now need to complete the following steps:

           * Click the following link to download your SSL certificate (generally try to use a version that includes intermediates & root - or your certificate may be rejected by some older clients)
           Format(s) most suitable for your server software:
              as X509 Certificate only, Base64 encoded:
              as X509 Intermediates/root only, Base64 encoded:
              as X509 Intermediates/root only Reverse, Base64 encoded:

           Other available formats:
              as PKCS#7 Base64 encoded:
              as PKCS#7 Bin encoded:
              as X509, Base64 encoded:

        Certificate Details:
           Common Name :  ilr.cornell.edu
           Subject Alternative Names : list of domain names
           Number of licenses :
           SSL Type :     InCommon Multi Domain SSL
           Term :         1 Year(s)
           Server :       Apache/ModSSL

# Uploading your SSL certificate on Acquia

* To upload the new version of your SSL certificate, go to Cloud > SSL and select Actions > Upload new certificate.

# Configuring your DNS settings

When you configure HTTPS support, Acquia Cloud creates a new DNS domain name for your site that ends with elb.amazonaws.com. You then need to configure your DNS settings to create a CNAME record pointing your site's domain name to the Acquia Cloud domain name. For example:

www.example.com CNAME 1234-4321.us-east-1.elb.amazonaws.com

This Acquia Cloud domain name is the name of your site's Amazon Elastic Load Balancer (ELB) instance and is listed on your Acquia Cloud Domain page at Cloud > Domains.

* Handling incoming HTTPS requests

Drupal will correctly identify incoming HTTPS requests using the normal "HTTPS" server environment variable if your site uses the settings.php include file. If you are not using the settings.php include file and want your site to correctly identify incoming HTTPS requests, add the following code to your settings.php file: <CODE>

* From CIT's email, visit first link "X509 Certificate only, Base64 encoded", and save file:

--> yyyymmdd_ilr_cornell_edu_cert.cer

* Visit third link "X509 Intermediates/root only Reverse, Base64 encoded" and save file:

--> yyyymmdd_ilr_cornell_edu_interm_reverse.cer

* Go to Acquia SSL option, paste first in SSL certificate field, and third in CA intermediate certificate field. Hit save, and it takes a while to finish. Watch from the workflow page.

#  Get CIT to add CNAME records to point at Acquia's load balancer

* Go to the cloud / domains page, and get the PROD CNAME, for example:
dc-12093-1387743486.us-east-1.elb.amazonaws.com

* Note to Cornell Hostmaster <hostmaster@cornell.edu>

    Please add the following CNAME record for our DNS entry pointing to Drupal hosting at Acquia:

    site.ilr.cornell.edu CNAME dc-12093-1387743486.us-east-1.elb.amazonaws.com

    <one line for each site>

# After CIT set up CNAME

Clear your DNS cache, and try to domain name. Try with both http and https, make sure both work.

