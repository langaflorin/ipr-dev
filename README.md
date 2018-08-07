# Structural Reform Support Service


## Create development instance
<ol>
<li><strong>Use composer to install the dependencies:</strong>
<p>In the project root run:</p>

```yaml
composer install
```
</li>

<li><strong>Create the development build properties:</strong>
<p>Before setting up and installing the site make sure to:</p>
<ul>
<li>Copy ./runner.yml.dist to ./runner.yml and edit the values in it to match your environment. Typically you will have to change the value for the base_url as well as the database and jira credentials.</li>
<li>Copy ./grumphp.yml.dist to ./grumphp.yml</li>
</ul>
</li>

<li>
<p><strong>Build the project:</strong></p>
<p>
Run the following runner commands:

```yaml
./vendor/bin/run drupal:site-install
./vendor/bin/run drupal:setup-development
```
</p>
</li>
</ol>

<br />
 
## Create clean instance
<ol>
<li><strong>Use composer to install the dependencies:</strong>
<p>In the project root run:</p>

```yaml
composer install --no-dev
```
</li>

<li><strong>Create the build properties:</strong>
<p>Before setting up and installing the site make sure to copy ./runner.yml.dist to ./runner.yml and edit the values in it to match your environment. Typically you will have to change the value for the base_url as well as the database and jira credentials.</p>
</li>

<li>
<strong>Build the project:</strong>
<p>
Run the following runner commands:

```yaml
./vendor/bin/run drupal:site-install
```
</p>
</li>
</ol>

<br />

## Jira settings
<p>After you finish with the installation. You need to setup some jira settings:</p>
<ol>
<li><strong>Setup fields mapping:</strong>
<p>From the admin menu go to "admin/jira-issue-fields-mapping" and map the fields of the request to their corresponding jira fields.</p>
<li><strong>Cache the options:</strong>
<p>
Run cron in order to cache the options for the fileds which have ('option' or 'array') as scheme type:

```yaml
drush cron
```
</p>
</li>
</ol>