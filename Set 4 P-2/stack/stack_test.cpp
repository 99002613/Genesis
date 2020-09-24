#include"stack.cpp"
#include<gtest/gtest.h>
TEST(a,b){
	Stack<int> p1(3);
	p1.push(1);
	p1.push(2);
	p1.push(3);
	ASSERT_EQ(3,p1.pop());
}
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
