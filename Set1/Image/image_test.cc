#include "image.h"

#include <gtest/gtest.h>

TEST(Image,DefaultConstuctor){

        Image a;
        //a.move(1,1);
        EXPECT_EQ(1,a.move(1,1));

}
TEST(Image,DisplayTest) {
    Image p1(1,1,5,5);
    p1.move(2,2);
    std::string ExpectedOut="2,2";
    testing::internal::CaptureStdout();
    p1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
