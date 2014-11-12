# features/homepage.feature
Feature: Homepage
  In order to see the website I need to see the homepage.

  Scenario: Looking at the homepage
    Given I am on the homepage
    Then I should see "Change lives. Change organizations. Change the world."

