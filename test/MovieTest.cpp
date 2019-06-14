
#include "gtest/gtest.h"
#include "../src/Movie.h"

TEST(MovieTest, constructor) {
    Movie movie("Chaperon Rouge", Movie::CHILDRENS);

    ASSERT_EQ(movie.getTitle(), "Chaperon Rouge");
    ASSERT_EQ(movie.getPriceCode(), Movie::CHILDRENS);
}


TEST(MovieTest, getTitle) {
    Movie movie("Chaperon Rouge", Movie::CHILDRENS);

    ASSERT_EQ(movie.getTitle(), "Chaperon Rouge");
}

TEST(MovieTest, getPriceCode) {
    Movie movie("Chaperon Rouge", Movie::CHILDRENS);

    ASSERT_EQ(movie.getPriceCode(), Movie::CHILDRENS);
}
