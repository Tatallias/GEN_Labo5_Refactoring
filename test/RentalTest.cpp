
#include "gtest/gtest.h"
#include "../src/Rental.h"
#include "../src/Childrens.h"
#include "../src/NewRelease.h"

TEST(RentalTest, constructor) {
    // Code
    Movie movie("Chaperon Rouge", Childrens::getChildrensPriceCode());
    Rental rent(movie, 6);

    ASSERT_EQ(rent.getDaysRented(), 6);
    ASSERT_EQ(rent.getMovie().getTitle(), movie.getTitle());
}

TEST(RentalTest, getTotal) {
    // Code
    Movie movie("Star Wars 21", NewRelease::getNewReleasePriceCode());
    Movie movie2("Pulpe Fiction");
    Movie movie3("Roi Lion", Childrens::getChildrensPriceCode());
    Rental rentNew(movie, 6);
    Rental rentRegular(movie2, 5);
    Rental rentChild(movie3, 4);

    ASSERT_EQ(rentNew.getTotal(), 6 * 3);
    ASSERT_EQ(rentRegular.getTotal(), 6.5);
    ASSERT_EQ(rentChild.getTotal(), 3);
}

TEST(RentalTest, getRenterPoints) {
    Movie movie("Star Wars 21", NewRelease::getNewReleasePriceCode());
    Movie movie2("Pulpe Fiction");
    Movie movie3("Roi Lion", Childrens::getChildrensPriceCode());
    Rental rentNew(movie, 6);
    Rental rentRegular(movie2, 5);
    Rental rentChild(movie3, 4);


    ASSERT_EQ(rentNew.getRenterPoints(), 2);
    ASSERT_EQ(rentRegular.getRenterPoints(), 1);
    ASSERT_EQ(rentChild.getRenterPoints(), 1);
}