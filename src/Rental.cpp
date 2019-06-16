#include "Movie.h"
#include "Rental.h"

Rental::Rental( const Movie& movie, int daysRented )
        : _movie( movie )
        , _daysRented( daysRented ) {}

int Rental::getDaysRented() const {
    return _daysRented;
}

const Movie& Rental::getMovie() const {
    return _movie;
}

double Rental::getTotal() const {
    return _movie.getAmountForDays(_daysRented);
}

std::string Rental::getTitle() const {
    return _movie.getTitle();
}

int Rental::getRenterPoints() const {
    return _movie.getRenterPoints(_daysRented);
}
