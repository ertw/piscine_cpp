#include <iostream>

static void printUpper(char *str) {
  if (!str) return;
  while (*str) {
    char a = ::toupper(*str++);
    std::cout << a;
  }
}

int main(int argc, char *argv[]) {
  if (argc <= 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (1);
  }
  for (int i = 1; i < argc; i++) {
    printUpper(argv[i]);
  }
  std::cout << std::endl;
}
