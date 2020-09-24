#ifndef __CREDITACCOUNT_H
#define __CREDITACCOUNT_H

#include<string>
#include"account.h"

class CreditAccount : public AccountBase {
  public:
  CreditAccount();
  CreditAccount(std::string,std::string,double);
  CreditAccount(std::string,std::string);
  void display() const;
};

#endif
