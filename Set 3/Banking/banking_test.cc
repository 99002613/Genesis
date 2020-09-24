#include "account.h"
#include "creditaccount.h"
#include "savingsaccount.h"
#include <gtest/gtest.h>

TEST(AccountBase,SavingsAccount) {
    AccountBase *a1=new SavingsAccount("25","new3",1000);
    a1->debit(500);
    a1->credit(200);
    EXPECT_EQ(700,a1->getBalance());

}

TEST(AccountBase,CreditAccount) {
    AccountBase *a2=new CreditAccount("20","new4",2000);
    a2->debit(500);
    a2->credit(1000);
    EXPECT_EQ(2500,a2->getBalance());
}
