// Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include "PriceCode.h"
#include "Regular.h"

class Movie {
public:

    explicit Movie( std::string  title, PriceCode *priceCode = Regular::getRegularPriceCode() );
    double getAmountForDays(int days) const;
    int getRenterPoints(int days) const;
    std::string getTitle() const;

private:
    PriceCode *_priceCode;
    std::string _title;
};

#endif // MOVIE_H