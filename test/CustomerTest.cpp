
#include "gtest/gtest.h"
#include "../src/Customer.h"

TEST(ExampleTest, simple) {
   // Code
   Customer cust("Violette");

   ASSERT_EQ(cust.getName(), "Violette");
}