#include "Account.class.hpp"
#include <iostream>
typedef Account t;

int Account::getNbAccounts(void) { return (Account::_nbAccounts); }
int Account::getTotalAmount(void) { return (Account::_totalAmount); }
int Account::getNbDeposits(void) { return (Account::_totalNbDeposits); }
int Account::getNbWithdrawals(void) { return (Account::_totalNbWithdrawals); }
void Account::displayAccountsInfos(void) {}

Account::Account(int initial_deposit) { return; };
Account::Account(void) { return; };
Account::~Account(void) { return; };

void Account::makeDeposit(int deposit){};
bool Account::makeWithdrawal(int withdrawal) { return (false); }
int Account::checkAmount(void) const { return (this->_amount); }
void Account::displayStatus(void) const {}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void) {
  std::cout << "[" << __TIMESTAMP__ << "] ";
}

int _accountIndex;
int _amount;
int _nbDeposits;
int _nbWithdrawals;
