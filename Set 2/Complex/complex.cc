#include "complex.h"
#include<iostream>
using namespace std;

Complex::Complex() :
    m_real(0),m_imag(0) {}

Complex::Complex(int a,int b):
    m_real(a),m_imag(b){}

Complex::Complex(const Complex& ref) :
    m_real(ref.m_real),m_imag(ref.m_imag){}

Complex Complex::operator + (const Complex& obj){
    Complex sum;
   sum.m_real=m_real+obj.m_real;
   sum.m_imag=m_imag+obj.m_imag;
   return sum;


}
Complex Complex::operator-(const Complex& obj){
    Complex diff;
   diff.m_real=m_real-obj.m_real;
   diff.m_imag=m_imag-obj.m_imag;
   return diff;
}

Complex Complex::operator*(const Complex& obj){
    Complex pro;
   pro.m_real=m_real*obj.m_real;
   pro.m_imag=m_imag*obj.m_imag;
   return pro;


}

Complex Complex::operator++()
{
    Complex temp;
    temp.m_real=m_real+1;
    temp.m_imag=m_imag+1;
    return temp;
}

Complex Complex::operator++(int dummy){
    Complex temp;
    temp.m_real=m_real+1;
    temp.m_imag=m_imag+1;
    return temp;


}

Complex Complex::operator==(const Complex& obj){
    Complex temp;
    if(m_real==obj.m_real && m_imag==obj.m_imag)
    {
        temp.m_real=0;
        temp.m_imag=0;
        return temp;

    }
    else{
        temp.m_real=1;
        temp.m_imag=1;
        return temp;
    }

}

void Complex::display()
{
	cout << "(real_value, i imaginary_value)" << "(" << m_real << ", i" << m_imag << ")" << endl;
}

int Complex::get_mreal()
{
	return m_real;
}
int Complex::get_mimag()
{
	return m_imag;
}
