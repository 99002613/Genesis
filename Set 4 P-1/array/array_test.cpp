#include"array.cpp"
#include<iostream>
#include<gtest/gtest.h>
TEST(MyArray,DefaultConstructor){
MyArray<int> a1;
ASSERT_EQ(0,a1.sum());
ASSERT_EQ(0,a1.sort());
ASSERT_EQ(0,a1.max());
ASSERT_EQ(0,a1.min());
ASSERT_EQ(false,a1.search());
ASSERT_EQ(0,a1.reverse());
}
TEST(MyArray,ParameterConstructor){
MyArray<int> a1(20);
ASSERT_EQ(20,a1.sum());
ASSERT_EQ(20,a1.sort());
ASSERT_EQ(20,a1.max());
ASSERT_EQ(20,a1.min());
ASSERT_EQ(true,a1.search());
ASSERT_EQ(20,a1.reverse());
}
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
