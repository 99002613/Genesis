
#include<iostream>
#include"point.h"
#include "gtest/gtest.h"
using namespace std;

/*TEST(point, DefaultConstructer)
{
    point p1;

    EXPECT_EQ(0, c1.isOrigin());
}*/

TEST(Point,DisplayTest) {
    Point p1(0,0);
    std::string ExpectedOut="(0,0)\n";
    testing::internal::CaptureStdout();
    p1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}



