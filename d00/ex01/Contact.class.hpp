#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <iomanip>
#include <iostream>

class Contact {
 public:
  Contact(void);
  ~Contact(void);
  void setAttributes();

 private:
  std::string firstname;
  std::string lastname;
  std::string nickname;
  std::string login;
  std::string postal_address;
  std::string email_address;
  std::string phone_number;
  std::string birthday_date;
  std::string favorite_meal;
  std::string underwear_color;
  std::string darkest_secret;
};

#endif
