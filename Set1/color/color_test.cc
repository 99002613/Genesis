#include <iostream>
#include "color.h"
#include <gtest/gtest.h>

using namespace std;
TEST(Color,DisplayTest) {
    Color c1(225,150,220);
    std::string ExpectedOut="225,150,220\n";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

/*TEST(Color,InvertTest) {
    Color c1(255,235,100);
    c1.invert();
    std::string ExpectedOut="0,20,155\n";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}*/
