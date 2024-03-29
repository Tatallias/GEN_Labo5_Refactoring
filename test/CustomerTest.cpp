
#include "gtest/gtest.h"
#include "../src/Customer.h"
#include "../src/NewRelease.h"
#include "../src/Childrens.h"

TEST(CustomerTest, constructor) {
   // Code
   Customer cust("Violette");

   ASSERT_EQ(cust.getName(), "Violette");
}
TEST(CustomerTest, statement) {
    // code
    Customer customer("Olivier");
    customer.addRental( Rental( Movie("Karate Kid"), 7));
    customer.addRental( Rental( Movie( "Avengers: Endgame", NewRelease::getNewReleasePriceCode() ), 5));
    customer.addRental( Rental( Movie("Snow White", Childrens::getChildrensPriceCode()), 3 ));

    ASSERT_EQ(customer.statement(), "Rental Record for Olivier\n"
                                    "\tKarate Kid\t9.5\n"
                                    "\tAvengers: Endgame\t15\n"
                                    "\tSnow White\t1.5\n"
                                    "Amount owed is 26\n"
                                    "You earned 4 frequent renter points");
}
