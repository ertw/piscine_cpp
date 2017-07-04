#include "Contact.class.hpp"

static int getNumContacts(Contact *contacts) {
  for (int i = 0; i <= Contact::index; i++) {
    if (!contacts[i].isSet) return i - 1;
  }
  return Contact::index;
}

static void search(Contact *contacts) {
  std::string userInput;
  std::cout << "\x1B[2J\x1B[H";
  if (!contacts[0].isSet) {
    std::cout << "No contacts!  Press return to go back to previous menu"
              << std::endl;
  } else {
    std::cout << "Input an ID from 0 to " << getNumContacts(contacts)
              << std::endl
              << std::endl;
    contacts[0].printHeader();
    for (int i = 0; i < Contact::index; i++) {
      if (!contacts[i].isSet) break;
      contacts[i].printSummary();
    }
  }
  std::getline(std::cin, userInput);
  int inputNum = std::stoi(userInput);
  if (inputNum <= getNumContacts(contacts) && contacts[inputNum].isSet) {
    contacts[inputNum].printAttributes();
    std::cout << "Press return to go back to the previous menu" << std::endl;
    std::getline(std::cin, userInput);
  }
}

static void menu(Contact *contacts) {
  std::string userInput;
  int contactIndex = 0;

  while (1 && contactIndex <= Contact::index) {
    std::cout << "\x1B[2J\x1B[H";
    std::cout << "SEARCH, ADD, or EXIT" << std::endl;
    std::getline(std::cin, userInput);
    if (userInput == "EXIT")
      break;
    else if (userInput == "ADD") {
      contacts[contactIndex].setAttributes();
      contactIndex++;
    } else if (userInput == "SEARCH")
      search(contacts);
  }
}

int main(void) {
  Contact contacts[8];
  menu(contacts);
}
