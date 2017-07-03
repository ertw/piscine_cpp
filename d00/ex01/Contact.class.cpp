#include "Contact.class.hpp"

Contact::Contact() { return; }
Contact::~Contact() { return; }

void Contact::setAttributes() {
  std::cout << "\x1B[2J\x1B[H";
  std::string userInput;
  std::cout << "Input first name" << std::endl;
  std::getline(std::cin, userInput);
  this->firstname = userInput;
  std::cout << "Input last name" << std::endl;
  std::getline(std::cin, userInput);
  this->lastname = userInput;
  std::cout << "Input nickname" << std::endl;
  std::getline(std::cin, userInput);
  this->nickname = userInput;
  std::cout << "Input login" << std::endl;
  std::getline(std::cin, userInput);
  this->login = userInput;
  std::cout << "Input postal address" << std::endl;
  std::getline(std::cin, userInput);
  this->postal_address = userInput;
  std::cout << "Input email address" << std::endl;
  std::getline(std::cin, userInput);
  this->email_address = userInput;
  std::cout << "Input phone number" << std::endl;
  std::getline(std::cin, userInput);
  this->phone_number = userInput;
  std::cout << "Input birthday date" << std::endl;
  std::getline(std::cin, userInput);
  this->birthday_date = userInput;
  std::cout << "Input favorite meal" << std::endl;
  std::getline(std::cin, userInput);
  this->favorite_meal = userInput;
  std::cout << "Input underwear color" << std::endl;
  std::getline(std::cin, userInput);
  this->underwear_color = userInput;
  std::cout << "Input darkest secret" << std::endl;
  std::getline(std::cin, userInput);
  this->darkest_secret = userInput;
}
