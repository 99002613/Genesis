#include<iostream>
#include"box.h"
#include "gtest/gtest.h"
using namespace std;

TEST(Box, DefaultConstructer)
{
    Box b1;

    EXPECT_EQ(0, b1.length());
    EXPECT_EQ(0, b1.breadth());
    EXPECT_EQ(0, b1.height());
}

TEST(Box, ParameterizedConstructer){
    Box b1(10,2,3);
    EXPECT_EQ(10, b1.length());
    EXPECT_EQ(2, b1.breadth());
    EXPECT_EQ(3, b1.height());
    EXPECT_EQ(60.0, b1.volume());


}
TEST(Box, CopyConstructer){
    Box b3(10,5,1);
    Box b2(b3);
    EXPECT_EQ(50, b2.volume());

}
