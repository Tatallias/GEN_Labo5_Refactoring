#ifndef LAB5_REFACTORING_RENTALS_H
#define LAB5_REFACTORING_RENTALS_H

#include <vector>
#include "Rental.h"

class Rentals {
public:
    Rentals();
    void addRental( const Rental& rental );
    std::string getRecord();
private:
    std::vector< Rental > _rentals;
    int frequentRenterPoints;
    double totalAmount;
};


#endif //LAB5_REFACTORING_RENTALS_H
