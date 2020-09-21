#include "point.h"
#include<math.h>
#include<iostream>
using namespace std;

Point::  Point(){
        m_x=0;
        m_y=0;
}
Point::  Point(int x,int y){
        m_x=x;
        m_y=y;

}
Point::  Point(const Point &ref){

         m_x=ref.m_x;
        m_y=ref.m_y;
}
void Point:: distanceFromOrigin(){

    float distance = sqrt(((m_x-0)*(m_x-0))+((m_x-0)*(m_x-0)));
    cout<<distance<<endl;
}
void Point::  isOrigin(){
        m_x=0;
        m_y=0;

}
void Point:: isOnYAxis(){
        m_x=0;

}
void Point:: isONXAxis(){

        m_y=0;

}
void Point::  display(){

    cout<<"("<<m_y<<","<<m_x<<")"<<endl;


}
