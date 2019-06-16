#include "Childrens.h"

Childrens *Childrens::instance = nullptr;

double Childrens::getAmountForDays(int days) {
    double toReturn = 1.5;
    if (days > 3) {
        toReturn += (days - 3) * 1.5;
    }
    return toReturn;
}

int Childrens::getRenterPoints(int days) {
    return 1;
}

Childrens *Childrens::getChildrensPriceCode() {
    if (!instance) {
        instance = new Childrens;
    }
    return instance;
}
