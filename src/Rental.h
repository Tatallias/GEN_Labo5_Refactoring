// Rental.h
#ifndef RENTAL_H
#define RENTAL_H
#include "Movie.h"

class Rental {
public:
    Rental( const Movie& movie, int daysRented );

    int getDaysRented() const;
    const Movie& getMovie() const;
    int getRenterPoints() const;
    double getTotal() const;
    std::string getTitle() const;

private:
    Movie _movie;
    int _daysRented;
};

#endif // RENTAL_H