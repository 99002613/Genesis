
#ifndef CURRENCY_H_INCLUDED
#define CURRENCY_H_INCLUDED
class Currency {
    int m_rupees;
    int m_paise;
  public:
    // Constructers

    Currency();
    Currency(int,int);
    Currency(int );

    // members
    Currency operator+(const Currency &ref);

    Currency operator-(const Currency &ref);
    Currency operator*(const Currency &ref);
    Currency& operator++();
    Currency operator++(int dummy);
    int operator< (const Currency &ref);
    bool operator> (const Currency &ref);
    int getP();

    bool operator==(const Currency &ref);

    void display();



};



#endif // CURRENCY_H_INCLUDED
