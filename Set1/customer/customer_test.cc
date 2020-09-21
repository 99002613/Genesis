#include<iostream>
#include"customer.h"
#include "gtest/gtest.h"
using namespace std;

TEST(customer, DefaultConstructer)
{
    customer c1;

    EXPECT_EQ(0, c1.getBalance());
}
TEST(customer,customer_details)
{
    customer c1(104932,7032439,1,7000);
    c1.credit(500);
    EXPECT_EQ(7500,c1.getBalance());


}


