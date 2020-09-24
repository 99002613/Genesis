
#include "currency.h"
#include <gtest/gtest.h>

TEST(Currency,DefaultConstructor) {
    Currency a1;
    EXPECT_EQ(0,a1.getP());
    //EXPECT_EQ(0,a1.getimag());


}

TEST(currency,construct1)
{
    Currency a1(20,5);
    Currency a2(20,2);
    Currency a3;
    a3=a1+a2;
    std::string ExpectedOut="40:7\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
}
TEST(currency,construct2)
{
    Currency a1(27,5);
    Currency a2(18,2);
    Currency a3;
    a3=a1-a2;
    std::string ExpectedOut="9:3\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
}
TEST(currency,construct3)
{
    Currency a1(10,5);
    Currency a2(15,2);
    Currency a3;
    a3=a1*a2;
    std::string ExpectedOut="150:10\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
}
TEST(currency,construct4)
{
    Currency a1(15,5);
    Currency a2(5,2);
    Currency a3(0,0);
    a3=a1<a2;
    std::string ExpectedOut="1\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
}
