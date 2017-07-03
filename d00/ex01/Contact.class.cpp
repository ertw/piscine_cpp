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

void Contact::printAttributes() {
  std::cout << "\x1B[2J\x1B[H";
  std::cout << "first name: ";
  std::cout << this->firstname << std::endl;
  std::cout << "last name: ";
  std::cout << this->lastname << std::endl;
  std::cout << "nickname: ";
  std::cout << this->nickname << std::endl;
  std::cout << "login: ";
  std::cout << this->login << std::endl;
  std::cout << "postal address: ";
  std::cout << this->postal_address << std::endl;
  std::cout << "email address: ";
  std::cout << this->email_address << std::endl;
  std::cout << "phone number: ";
  std::cout << this->phone_number << std::endl;
  std::cout << "birthday date: ";
  std::cout << this->birthday_date << std::endl;
  std::cout << "favorite meal: ";
  std::cout << this->favorite_meal << std::endl;
  std::cout << "underwear color: ";
  std::cout << this->underwear_color << std::endl;
  std::cout << "darkest secret: ";
  std::cout << this->darkest_secret << std::endl;
}

void Contact::printSummary() {
  std::cout << "\x1B[2J\x1B[H";
  printFormatted(this->firstname);
  std::cout << " | ";
  printFormatted(this->lastname);
  std::cout << " | ";
  printFormatted(this->nickname);
}

void Contact::printFormatted(std::string attribute) {
  std::cout << std::setw(10);
  if (attribute.length() > 10)
    std::cout << attribute.substr(0, 9) << ".";
  else
    std::cout << attribute;
}
