# features/homepage.feature
Feature: Homepage
  In order to see the website I need to see the homepage.

  @javascript
  Scenario: Looking at the homepage
    Given I am on the homepage
    Then I should see "Welcome to Site-Install"

  #@api
  #Scenario: Logged in user
  #  Given I am logged in as a user with the "authenticated user" role
  #  Then I should see "My account"
