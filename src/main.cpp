#include <iostream>

#include "Customer.h"
#include "Childrens.h"
#include "NewRelease.h"
#include "Movie.h"

int main() {

    Customer customer("Olivier");
    customer.addRental( Rental( Movie("Karate Kid"), 7));
    customer.addRental( Rental( Movie( "Avengers: Endgame", NewRelease::getNewReleasePriceCode() ), 5));
    customer.addRental( Rental( Movie("Snow White", Childrens::getChildrensPriceCode()), 3 ));

    std::cout << customer.statement() << std::endl;

    return 0;
}