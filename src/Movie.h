// Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include "PriceCode.h"
#include "Regular.h"

class Movie {
public:

    Movie( const std::string& title, PriceCode *priceCode = Regular::getRegularPriceCode() );

    double getAmountForDays(int days) const;
    int getRenterPoints(int days) const;
    std::string getTitle() const;

private:
    PriceCode *_priceCode;
    std::string _title;
};
inline Movie::
Movie( const std::string& title, PriceCode *priceCode )
        : _title( title )
        , _priceCode( priceCode )
{}
inline double Movie::getAmountForDays(int days) const {
    return _priceCode->getAmountForDays(days);
}
inline int Movie::getRenterPoints(int days) const {
    return _priceCode->getRenterPoints(days);
}
inline std::string Movie::
getTitle() const { return _title; }

#endif // MOVIE_H