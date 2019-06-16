
#include "gtest/gtest.h"
#include "../src/Movie.h"
#include "../src/Childrens.h"

TEST(MovieTest, constructor) {
    Movie movie("Chaperon Rouge", Childrens::getChildrensPriceCode());

    ASSERT_EQ(movie.getTitle(), "Chaperon Rouge");
}


TEST(MovieTest, getTitle) {
    Movie movie("Chaperon Rouge", Childrens::getChildrensPriceCode());

    ASSERT_EQ(movie.getTitle(), "Chaperon Rouge");
}

