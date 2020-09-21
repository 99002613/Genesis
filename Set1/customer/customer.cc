#include<iostream>
#include "customer.h"
using namespace std;

customer :: customer( ):
    m_custId(0), m_phone(0),m_type(0),m_balance(0)
    {

    }

    customer :: customer(int id,int ph,int ty,double bal):
        m_custId(id),m_phone(ph),m_type(ty),m_balance(bal)
        {

        }

customer :: customer(int id1,int ph1,int ty1 ):
        m_custId(id1),m_phone(ph1),m_type(ty1)
        {

        }

customer :: customer(const customer &ref ):
        m_custId(ref.m_custId), m_phone(ref.m_phone),m_type(ref.m_type),m_balance(ref.m_balance)
        {

        }

customer :: customer(AccountType){

        m_type=savings;
       // m_type=current;

}

void customer:: credit( double x){


   m_balance+=x;

}

double customer :: getBalance( ){

return m_balance;
}


void customer :: display( ){

    cout<<m_custId<<","<<m_balance<<endl;

}
