#include "color.h"
#include<iostream>
using namespace std;

Color::Color() {
        m_r=0;
        m_b=0;
        m_g=0;

}
Color::  Color(int r,int b,int g) {
         m_r=r;
        m_b=b;
        m_g=g;


}
Color::  Color(int a) {

     m_r=a;
        m_b=a;
        m_g=a;

}
Color::  Color(Color_t) {

        m_r = Color_t::red;
        m_g = Color_t::green;
        m_b = Color_t::blue;


}
 void Color::   invert() {

     m_r=255-m_r;
     m_b=255-m_b;
     m_g=255-m_g;
}
 void Color::   display() {

     cout<<m_r<<","<<m_b<<","<<m_g<<endl;
}
