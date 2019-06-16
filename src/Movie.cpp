#include <utility>

#include "Regular.h"
#include "PriceCode.h"
#include <utility>

#include <string>
#include "Movie.h"

Movie::Movie( std::string  title, PriceCode *priceCode )
        : _title(std::move( title ))
        , _priceCode( priceCode )
{}

double Movie::getAmountForDays(int days) const {
    return _priceCode->getAmountForDays(days);
}

int Movie::getRenterPoints(int days) const {
    return _priceCode->getRenterPoints(days);
}

std::string Movie::getTitle() const {
    return _title;
}