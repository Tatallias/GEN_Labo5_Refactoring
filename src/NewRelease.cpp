#include "NewRelease.h"

NewRelease *NewRelease::instance = nullptr;

NewRelease *NewRelease::getNewReleasePriceCode() {
    if (!instance) {
        instance = new NewRelease;
    }
    return instance;
}

double NewRelease::getAmountForDays(int days) {
    return days * 3;
}

int NewRelease::getRenterPoints(int days) {
    if(days > 1) {
        return 2;
    }
    return 1;
}

