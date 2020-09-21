#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED

enum AccountType{

    savings,
    current
    };

class customer {


    int m_custId;
    int m_phone;
    int m_type;
    std:: string m_customerName;
    double m_balance;
public:
    customer( );
    customer(AccountType);
    customer(int,int,int,double);
    customer(int,int,int);
    customer(const customer &);
    void credit(double );
    double getBalance( );
    void display( );

};

#endif // CUSTOMER_H_INCLUDED
