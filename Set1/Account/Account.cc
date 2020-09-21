#include<iostream>
#include "Account.h"

using namespace std;

Account::Account():
     m_accNumber(0),
    m_accName(""),
     m_balance(0) {

}

Account::Account(int num,std::string name,double bal):
    m_accNumber(num),m_accName(name),m_balance(bal) {
}
Account::Account(const Account& ref):
    m_accNumber(ref.m_accNumber),m_accName(ref.m_accName),m_balance(ref.m_balance) {
}
double Account:: getBalance() {

    return m_balance;
}
double Account::credit(double amount) {
    return m_balance+=amount;

}
double Account::debit(double amount1) {
    return m_balance-=amount1;
}

void Account::display() {
    std::cout<<m_accNumber<<endl<<m_accName<<endl<<m_balance<<endl;
}
