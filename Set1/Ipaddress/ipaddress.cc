#include<string>
#include<iostream>
#include "ipaddress.h"
using namespace std;

IPAddress::IPAddress(){}
IPAddress::IPAddress(int x[0], int y[1], int z[2], int a[3])
    {ipval[0]=x[0]; ipval[1]=y[1]; ipval[2]=z[2]; ipval[3]=a[3];}

IPAddress::IPAddress(int w[4])  {ipval[4]=w[4];}

bool IPAddress::isLoopBack(int x[0], int y[1], int z[2], int a[3])
{
      if(x[0]==127 && x[1]==000 && x[2]==000 && x[3]==001)
        return true;
      else
        return false;
}

std::string IPAddress::getIPClass(int x[0])
{

        if(x[0]>=0 && x[0]<=127)
        cout<<"Class A";
        if(x[0]>127 && x[0]<191)
        cout<<"Class B";
        if(x[0]>191 && x[0]<224)
        cout<<"Class C";
        if(x[0]>224 && x[0]<=239)
        cout<<"Class D";
        if(x[0]>239)
        cout<<"Class E";
}


void IPAddress::display()
{
    cout << ipval[0] << "," << ipval[1] << "," << ipval[2] << ","<<ipval[3];
}


