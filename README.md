# IPR


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
<li>Copy ./runner.yml.dist to ./runner.yml and edit the values in it to match your environment. Typically you will have to change the value for the base_url.</li>
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

```yaml
drush cron
```
</p>
</li>
</ol>
