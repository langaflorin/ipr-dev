<?php

namespace IPR\TaskRunner\Commands;

use OpenEuropa\TaskRunner\Commands\AbstractCommands;
use Symfony\Component\Console\Input\InputOption;

/**
 * Class IPRCommands
 *
 * @package IPRCommands\TaskRunner\Commands
 */
class IPRCommands extends AbstractCommands {

  /**
   * Build IPR theme.
   *
   * This command will install a target bootstrap components provided in
   * local runner.yml.dist/runner.yml files.
   *
   * @command ipr:build-theme
   *
   * @option repo   Component repository.
   * @option branch Component branch.
   * @option path   Component path.
   *
   * @param array $options
   */
  public function buildTheme(array $options = [
    'repo' => InputOption::VALUE_REQUIRED,
    'path' => InputOption::VALUE_REQUIRED,
    'branch' => InputOption::VALUE_REQUIRED,
  ]) {

    // Delete the bootstrap component if exist.
    $this->taskDeleteDir($options['path'])->run();

    // Clone bootstrap components.
    $this->taskGitStack()
      ->stopOnFail()
      ->cloneRepo($options['repo'], $options['path'], $options['branch'])
      ->run();
  }

}
