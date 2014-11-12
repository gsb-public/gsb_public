<?php

use Behat\Behat\Context\Context;
use Behat\Behat\Context\SnippetAcceptingContext;
use Behat\Gherkin\Node\PyStringNode;
use Behat\Gherkin\Node\TableNode;
use Behat\Behat\Hook\Scope\BeforeScenarioScope;
use Behat\MinkExtension\Context\MinkContext;

/**
 * Defines application features from the specific context.
 */
class FeatureContext extends MinkContext
{
  /**
   * Initializes context.
   *
   * Every scenario gets its own context instance.
   * You can also pass arbitrary arguments to the
   * context constructor through behat.yml.
   */
  public function __construct()
  {
    $this->parameters['authentication']['username'] = 'admin';
    $this->parameters['authentication']['password'] = 'gsbrevamp';
  }

  /**
   * If the website is access protected with HTTP basic auth,
   * we perform an authentication before each scenario with the credentials
   * from the configuration
   *
   * @BeforeScenario
   */
  public function performBasicHttpAuthentication(BeforeScenarioScope $scope) {
    $this->getSession()->setBasicAuth(
      $this->parameters['authentication']['username'],
      $this->parameters['authentication']['password']
    );
  }
}
