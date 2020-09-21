#include "Account.h"
#include "gtest/gtest.h"
using namespace std;

TEST(Account, DefaultConstructer)
{
    Account a1;

    EXPECT_EQ(0, a1.getBalance());
    EXPECT_EQ(0, a1.credit(0));
    EXPECT_EQ(0, a1.debit(0));
}

TEST(Account, ParametarizedConstructer)
{
    Account a1(786123,"Pavan",7000);

    EXPECT_EQ(7000, a1.getBalance());
    EXPECT_EQ(7500, a1.credit(500));
    EXPECT_EQ(7000, a1.debit(500));
    EXPECT_EQ(7000, a1.getBalance());
}
TEST(Account, CopyConstructer){
    Account a1(786123,"Pavan",7000);
    Account a2(a1);
    EXPECT_EQ(7000, a1.getBalance());
    EXPECT_EQ(7500, a1.credit(500));
    EXPECT_EQ(7000, a1.debit(500));
    EXPECT_EQ(7000, a1.getBalance());

}
