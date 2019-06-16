// Customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include <vector>
#include "Rental.h"
#include "Rentals.h"

class Customer {
public:
    Customer();
    explicit Customer(std::string name );

    void addRental(const Rental& rental);
    std::string getName() const;
    std::string statement();

private:
    std::string _name;
    Rentals _rentals;
};

#endif // CUSTOMER_H