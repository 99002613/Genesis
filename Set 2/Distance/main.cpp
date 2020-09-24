#include <iostream>
#include "distance.h"
#include <gtest/gtest.h>

TEST(Distance,construct1)
{
    Distance a1(33,5);
    Distance a2(10,2);
    Distance a3;
    a3=a1+a2;
    std::string ExpectedOut="43.7\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
}
   // EXPECT
   TEST(Distance1,construct2)
{
    Distance a1(10,5);
    Distance a2(15,2);
    Distance a3;
    a3=a1-a2;
    std::string ExpectedOut="-5.3\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
   // EXPECT_EQ(0,a1.getimag());
}
/*TEST(Distance,construct3)
{
    Distance a1(10,5);
    //Distance a2(15,2);
    Distance a3;
    a1++;
    std::string ExpectedOut="10.5\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
   // EXPECT_EQ(0,a1.getimag());
}

*/
/*TEST(Distance5,bas_hojja)
{
    Distance a1(10,5);
    Distance a2(15,2);
    Distance a3;
    a3=a1+a2;
    EXPECT_EQ(25.7,a3.display());
}*/
