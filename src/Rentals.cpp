#include <sstream>
#include "Rentals.h"

void Rentals::addRental(const Rental &rental) {
    _rentals.push_back(rental);
    frequentRenterPoints += rental.getMovie().getRenterPoints(rental.getDaysRented());
    totalAmount += rental.getMovie().getAmountForDays(rental.getDaysRented());
}

std::string Rentals::getRecord() {
    std::ostringstream result;

    for (const Rental& rental: _rentals) {
        // show figures for this rental
        result << "\t" << rental.getMovie().getTitle() << "\t"
               << rental.getMovie().getAmountForDays(rental.getDaysRented()) << "\n";
    }

    result << "Amount owed is " << totalAmount << "\n";
    result << "You earned " << frequentRenterPoints
           << " frequent renter points";

    return  result.str();
}

Rentals::Rentals() : frequentRenterPoints(0), totalAmount(0) {

}
