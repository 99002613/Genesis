#include "ipaddress.h"
#include<iostream>
#include <gtest/gtest.h>
TEST(IPAddress,getIPClass)
{
    IPAddress I1;

    EXPECT_EQ("Class A",I1.getIPClass(000));



}
