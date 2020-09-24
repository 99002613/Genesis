#include "stack.h"
#include <iostream>
using namespace std;

template<typename T>
MyStack <T> :: MyStack():  m_top(0){}

template<typename T>
MyStack <T> :: MyStack (int len): m_maxlen(50){}

template<typename T>
void MyStack<T> :: push(T val)
{
    if(m_top >= (m_maxlen-1))
    { cout<<"Stack Overflow, cannot be pushed!"<<endl; }
    else{
        m_top++;
        m_arr[m_top]=val;
    }
}

template<typename T>
T MyStack<T> :: pop()
{
    if(m_top<=-1) {cout<<"Stack is underflow! cannot be popped";}
    else{
        cout<<"popped element is: "<<m_arr[m_top];
        m_top--; }
}

template <typename T>
T MyStack <T> :: peek() const
{ for(int i=0; i<m_maxlen; i++) {cout<<m_arr[i}<<","; }

template <typename T>
bool MyStack <T> :: isEmpty() const
{
    if(m_top<=-1) { return true;}
    else{return false;}
}

template <typename T>
bool MyStack <T> :: isFull() const
{
    if(m_top>=m_maxlen-1) {return true;}
    else{return false;}
}
