#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include<string>

class AccountBase {
  std::string m_accNumber;
  std::string m_accName;
  double m_balance;
  public:
  AccountBase();
  AccountBase(std::string,std::string,double);
  AccountBase(std::string,std::string);
  AccountBase(const AccountBase&);
  void debit(double);
  void credit(double);
  virtual void display() const = 0;
  double getBalance() const;
};

#endif

