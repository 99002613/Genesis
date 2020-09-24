#ifndef __SAVINGSACCOUNT_H
#define __SAVINGSACCOUNT_H

#include<string>
#include"account.h"

class SavingsAccount : public AccountBase {
  public:
  SavingsAccount();
  SavingsAccount(std::string,std::string,double);
  SavingsAccount(std::string,std::string);
  void display() const;
};

#endif

