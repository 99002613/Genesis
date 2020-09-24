#include "employee.h"
#include "manager.h"
#include "trainee.h"
#include "engineer.h"
#include <gtest/gtest.h>


TEST(Manager,Pay)
{
    Manager m1("1","bunny",50000,10,12,25);
    EXPECT_EQ(7500,m1.appraisal());
    EXPECT_EQ(50000,m1.payroll());
}
TEST(Engineer,Pay)
{
    Engineer m1("2","bunny1",33000,8,10);
    EXPECT_EQ(3300,m1.appraisal());
    EXPECT_EQ(33000,m1.payroll());
}
TEST(Trainee,Pay)
{
    Trainee m1("3","bunny3",10000,1,"ICP",60);
    EXPECT_EQ(500,m1.appraisal());
    EXPECT_EQ(10000,m1.payroll());
}
