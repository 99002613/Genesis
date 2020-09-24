#include"point.cpp"
#include<iostream>
#include<gtest/gtest.h>
TEST(a,b){
	Point<int> p1(3,4);
	ASSERT_EQ(3, p1.xaxis());
	ASSERT_EQ(4, p1.yaxis());
	ASSERT_EQ(5,p1.distanceFromOrigin());
	ASSERT_EQ(Q1,p1.quadrant());
	std::string ExpectedOut="3,4";
	testing::internal::CaptureStdout();
	p1.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
