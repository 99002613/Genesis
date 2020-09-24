#include "complex.h"

#include<iostream>
#include<gtest/gtest.h>
using namespace std;


TEST(Complex_values, DefaultConstructor)
{
	Complex c;
	EXPECT_EQ(0, c.get_mreal());
	EXPECT_EQ(0, c.get_mimag());
}
TEST(Complex_values, ParameterizedConstructor)
{
	Complex c(7, 3);
	EXPECT_EQ(7, c.get_mreal());
	EXPECT_EQ(3, c.get_mimag());
}
TEST(Complex_values, CopyConstructor)
{
	Complex c(9, 7);
	Complex c1(c);
	EXPECT_EQ(9, c1.get_mreal());
	EXPECT_EQ(7, c1.get_mimag());
}
TEST(Complex_values, addition_overloading)
{
	Complex c1(3, 3), c2(5, 6);
	EXPECT_EQ(8, (c1 + c2).get_mreal());
	EXPECT_EQ(9, (c1 + c2).get_mimag());
}
TEST(Complex_values, subtraction_overloading)
{
	Complex c1(5, 3), c2(2, 6);
	EXPECT_EQ(3, (c1 - c2).get_mreal());
	EXPECT_EQ(-3, (c1 - c2).get_mimag());
}
TEST(Complex_values, multiplication_overloading)
{
	Complex c1(2, 3), c2(5, 6);
	EXPECT_EQ(10, (c1 * c2).get_mreal());
	EXPECT_EQ(18, (c1 * c2).get_mimag());
}
TEST(Complex_values, preinc_overloading)
{
	Complex c(2, 3);
	Complex res;
	res = ++c;
	EXPECT_EQ(3, res.get_mreal());
	EXPECT_EQ(4, res.get_mimag());
}
TEST(Complex_values, postinc_overloading)
{
	Complex c(2, 3);
	Complex res;
	res = c++;
	EXPECT_EQ(3, res.get_mreal());
	EXPECT_EQ(4, res.get_mimag());
}
TEST(Complex_values, equality_overloading)
{
	Complex c1(2, 3), c2(2, 3);
	EXPECT_EQ(0, (c1 == c2).get_mreal()); //equal
	EXPECT_EQ(0, (c1 == c2).get_mimag());

	Complex c3(7, 9), c4(3, 10);//unequal
	EXPECT_EQ(1, (c3 == c4).get_mreal());
	EXPECT_EQ(1, (c3 == c4).get_mimag());
}
