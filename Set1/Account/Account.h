#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

#include<string>
using namespace std;
class Account {
    int m_accNumber;
  std::string m_accName;
  double m_balance;

public:
  Account();
  Account(int, std::string, double);
  Account(int,double);
  Account(const Account &);
  double credit(double amount);
  double debit(double amount1);

  double getBalance() ;
  void display();
};



#endif // ACCOUNT_H_INCLUDED
