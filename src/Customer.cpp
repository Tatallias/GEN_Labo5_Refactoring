#include <utility>

// Customer.cpp
#include "Rental.h"
#include <string>
#include <sstream>
#include <vector>
#include "Customer.h"
#include "Movie.h"

using std::ostringstream;
using std::vector;

using namespace std;

string Customer::statement() {
    ostringstream result;

    result << "Rental Record for " << getName() << "\n";
    result << _rentals.getRecord();

    return result.str();
}

Customer::Customer() = default;

Customer::Customer( string  name )
        : _name(std::move(name)) {}

void Customer::addRental(const Rental& rental) {
    _rentals.addRental(rental);
}

string Customer::getName() const {
    return _name;
}