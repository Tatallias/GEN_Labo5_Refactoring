
#include "gtest/gtest.h"
#include "../src/Rental.h"

TEST(RentalTest, constructor) {
    // Code
    Movie movie("Chaperon Rouge", Movie::CHILDRENS);
    Rental rent(movie, 6);

    ASSERT_EQ(rent.getDaysRented(), 6);
    ASSERT_EQ(rent.getMovie().getTitle(), movie.getTitle());
}