#include<iostream>
#include "box.h"
using namespace std;

Box::Box():
    m_length(0), m_breadth(0), m_height(0){
    }

Box::Box(int l,int b, int h):
    m_length(l), m_breadth(b), m_height(h){
    }

Box::Box(int a): m_length(a),m_breadth(a),m_height(a){
}

Box::Box(const Box & ref):
    m_length(ref.m_length), m_breadth(ref.m_breadth), m_height(ref.m_height){
    }

int Box::length(){
return m_length;
}

int Box::breadth(){
return m_breadth;
}

int Box::height(){
return m_height;
}
double Box:: volume(){
    int k;
    k= m_length*m_breadth*m_height;
    return k;
}

void Box:: display(){
   std::cout << m_length << "," << m_breadth << "," << m_height << "," << "\n";
}
