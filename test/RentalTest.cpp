
#include "gtest/gtest.h"
#include "../src/Rental.h"
#include "../src/Childrens.h"

TEST(RentalTest, constructor) {
    // Code
    Movie movie("Chaperon Rouge", Childrens::getChildrensPriceCode());
    Rental rent(movie, 6);

    ASSERT_EQ(rent.getDaysRented(), 6);
    ASSERT_EQ(rent.getMovie().getTitle(), movie.getTitle());
}