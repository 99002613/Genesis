#ifndef IPADDRESS_H_INCLUDED
#define IPADDRESS_H_INCLUDED

#include<string>

class IPAddress{
private:
    int ipval[4];
public:
    IPAddress();
    IPAddress(int[],int[],int[],int[]);
    IPAddress(int[]);
    bool isLoopBack(int[],int[],int[],int[]);
    std::string getIPClass(int[]);
    void display();
};


#endif // IPADDRESS_H_INCLUDED
