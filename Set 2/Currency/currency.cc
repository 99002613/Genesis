
#include<iostream>
#include "currency.h"

Currency::Currency():m_rupees(0),m_paise(0) {
}

Currency::Currency(int a,int b):m_rupees(a),m_paise(b) {
}

Currency::Currency(int d):m_rupees(d) {
}

Currency Currency::operator+(const Currency &ref) {

    int tmins = m_paise + ref.m_paise;
    int thrs = m_rupees+ref.m_rupees;
    return Currency(thrs, tmins);
}

Currency Currency::operator-(const Currency &ref) {
    int tmins = m_paise - ref.m_paise;
    int thrs = m_rupees - ref.m_rupees;
    return Currency(thrs, tmins);
}

Currency Currency::operator*(const Currency &ref) {
    int tmins = m_paise * ref.m_paise;
    int thrs = m_rupees * ref.m_rupees;
    return Currency(thrs, tmins);
}

Currency& Currency:: operator++() {
    ++m_paise; // TODO: mm > 60
    return *this;
}

Currency Currency:: operator++(int dummy) {
    Currency orig(*this);
    ++m_rupees; // TODO: mm > 60
    return orig;
}

bool Currency::operator==(const Currency &ref) {
    return m_rupees == ref.m_rupees && m_paise == ref.m_paise;
}

int Currency::operator< (const Currency &ref){
    int les=16;
   // bool True
    if(ref.m_rupees<les)
        return 1;
    else
        return 0;

}
bool Currency::operator> (const Currency &ref){
     int gre=16;
   // bool True
    if(ref.m_rupees>gre)
        return true;
    else
        return false;

}

int Currency::getP(){
    return m_paise;
}
void Currency::display() {
    std::cout<<m_rupees<<":"<<m_paise<<"\n";
}
