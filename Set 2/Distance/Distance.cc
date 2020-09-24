#include "distance.h"
#include<iostream>
Distance::Distance(){}
Distance::Distance(int a, int b):m_feet(a),m_inch(b){}
Distance Distance::operator+(const Distance &ref)
    {
        int feet=m_feet+ref.m_feet;
        int inch=m_inch+ref.m_inch;
        return Distance(feet,inch);
    }
Distance Distance::operator-(const Distance &ref)
{
     int feet=m_feet-ref.m_feet;
        int inch=m_inch-ref.m_inch;
        return Distance(feet,inch);
}
Distance& Distance::operator++()
{
++m_feet;
return *this;
}
bool Distance :: operator == (const Distance &ref)
{
    return m_feet == ref.m_feet && m_inch;
}
Distance Distance :: display ()
{
    std::cout<<m_feet<<"."<<m_inch<<"\n";
}


