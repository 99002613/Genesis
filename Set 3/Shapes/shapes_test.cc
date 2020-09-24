#include"shape.h"
#include"polygon.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
#include<gtest/gtest.h>

TEST(Circle,Area)
{
    Circle c1(100);
    EXPECT_EQ(31400,c1.area());
    EXPECT_EQ(628,c1.circumference());
}
TEST(Triangle,Area)
{
    Triangle t1(5,4,3);
    EXPECT_EQ(6,t1.area());
    EXPECT_EQ(12,t1.circumference());
}
TEST(Rectangle,Area)
{
    Rectangle r1(16,20);
    EXPECT_EQ(320,r1.area());
    EXPECT_EQ(72,r1.circumference());
}
