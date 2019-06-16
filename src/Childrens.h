//
// Created by claude on 15.06.2019.
//

#ifndef LAB5_REFACTORING_CHILDRENS_H
#define LAB5_REFACTORING_CHILDRENS_H

#include "PriceCode.h"

class Childrens : public PriceCode {
private:
    static Childrens *instance;
    Childrens() = default;
public :
    Childrens(const Childrens&) = delete;
    Childrens& operator=(const Childrens&) = delete;
    static Childrens* getChildrensPriceCode();
    double getAmountForDays(int days) override;
    int getRenterPoints(int days) override;
};
#endif //LAB5_REFACTORING_CHILDRENS_H
