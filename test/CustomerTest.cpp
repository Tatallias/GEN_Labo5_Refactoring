
#include "gtest/gtest.h"
#include "../src/Customer.h"

TEST(CustomerTest, constructor) {
   // Code
   Customer cust("Violette");

   ASSERT_EQ(cust.getName(), "Violette");
}
