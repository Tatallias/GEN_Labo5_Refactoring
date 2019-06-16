//
// Created by claude on 15.06.2019.
//

#ifndef LAB5_REFACTORING_REGULAR_H
#define LAB5_REFACTORING_REGULAR_H

#include "PriceCode.h"

class Regular : public PriceCode {
private:
    static Regular *instance;
    Regular() {

    }
public :
    Regular(const Regular&) = delete;
    Regular& operator=(const Regular&) = delete;
    static Regular* getRegularPriceCode() {
        if(!instance) {
            instance = new Regular;
        }
        return instance;
    }
    double getAmountForDays(int days) {
        double toReturn = 2;
        if(days > 2) {
            toReturn += (days - 2) * 1.5;
        }
        return toReturn;
    }
    int getRenterPoints(int days) {
        return 1;
    }
};
#endif //LAB5_REFACTORING_REGULAR_H
