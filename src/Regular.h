//
// Created by claude on 15.06.2019.
//

#ifndef LAB5_REFACTORING_REGULAR_H
#define LAB5_REFACTORING_REGULAR_H

#include "PriceCode.h"

class Regular : public PriceCode {
private:
    static Regular *instance;
    Regular() = default;
public :
    Regular(const Regular&) = delete;
    Regular& operator=(const Regular&) = delete;
    static Regular* getRegularPriceCode();
    double getAmountForDays(int days) override;
    int getRenterPoints(int days) override;
};
#endif //LAB5_REFACTORING_REGULAR_H
