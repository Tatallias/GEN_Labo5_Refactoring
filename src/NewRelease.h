#ifndef LAB5_REFACTORING_NEWRELEASE_H
#define LAB5_REFACTORING_NEWRELEASE_H

#include "PriceCode.h"

class NewRelease : public PriceCode {
private:
    static NewRelease *instance;
    NewRelease() {

    }
public :
    NewRelease(const NewRelease&) = delete;
    NewRelease& operator=(const NewRelease&) = delete;
    static NewRelease* getNewReleasePriceCode() {
        if(!instance) {
            instance = new NewRelease;
        }
        return instance;
    }
    double getAmountForDays(int days) {
        return days * 3;
    }
    int getRenterPoints(int days) {
        if(days > 1) {
            return 2;
        }
        return 1;
    }
};
#endif //LAB5_REFACTORING_NEWRELEASE_H
