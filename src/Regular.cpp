#include "Regular.h"

Regular *Regular::instance = nullptr;

double Regular::getAmountForDays(int days) {
    double toReturn = 2;
    if (days > 2) {
        toReturn += (days - 2) * 1.5;
    }
    return toReturn;
}

int Regular::getRenterPoints(int days) {
    return 1;
}

Regular *Regular::getRegularPriceCode() {
    if (!instance) {
        instance = new Regular;
    }
    return instance;
}


