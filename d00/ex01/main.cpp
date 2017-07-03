#include <iostream>

static void checkInput(std::string userInput) {
  if (userInput == "EXIT") {
    std::exit(1);
  }
}

int main(void) {
  std::string userInput;
  while (1) {
    std::cin >> userInput;
    checkInput(userInput);
  }
}
