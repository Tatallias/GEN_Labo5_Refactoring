//
// Created by claude on 14.06.2019.
//

#ifndef LAB5_REFACTORING_PRICECODE_H
#define LAB5_REFACTORING_PRICECODE_H

class PriceCode {

public:
    virtual double getAmountForDays(int days) = 0;
    virtual int getRenterPoints(int days) = 0;
};
#endif //LAB5_REFACTORING_PRICECODE_H
