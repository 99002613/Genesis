#include "frac.h"
#include <gtest/gtest.h>
#include <iostream>

using namespace std;

TEST(Fraction,DefaultConstructor) {
    Fraction f1;
    EXPECT_EQ(0,f1.getnumerator());
    EXPECT_EQ(0,f1.getdenominator());
}

TEST(Fraction,DisplayTest) {
    Fraction c1(3,2);
    Fraction c2(5,2);
    Fraction c3;
    c3=c1+c2;
    string ExpectedOut="15/4\n";
    testing::internal::CaptureStdout();
    c3.display();
    string ActualOut = testing::internal::GetCapturedStdout();
    //testing::internal::CaptureStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
