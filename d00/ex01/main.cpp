#include "Contact.class.hpp"

static void menu(Contact *contacts) {
  std::string userInput;
  int contactIndex = 0;

  while (1) {
    std::cout << "\x1B[2J\x1B[H";
    std::cout << "SEARCH, ADD, or EXIT" << std::endl;
    std::getline(std::cin, userInput);
    if (userInput == "EXIT")
      break;
    else if (userInput == "ADD")
      contacts[contactIndex].setAttributes();
    else if (userInput == "SEARCH")
      break;
    contactIndex++;
  }
}

int main(void) {
  Contact contacts[8];
  menu(contacts);
}
