//
// Created by claude on 15.06.2019.
//

#ifndef LAB5_REFACTORING_CHILDRENS_H
#define LAB5_REFACTORING_CHILDRENS_H

#include "PriceCode.h"

class Childrens : public PriceCode {
private:
    static Childrens *instance;
    Childrens() {

    }
public :
    Childrens(const Childrens&) = delete;
    Childrens& operator=(const Childrens&) = delete;
    static Childrens* getChildrensPriceCode() {
        if(!instance) {
            instance = new Childrens;
        }
        return instance;
    }
    double getAmountForDays(int days) {
        double toReturn = 1.5;
        if(days > 3) {
            toReturn += (days - 3) * 1.5;
        }
        return toReturn;
    }
    int getRenterPoints(int days) {
        return 1;
    }
};
#endif //LAB5_REFACTORING_CHILDRENS_H
