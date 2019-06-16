#ifndef LAB5_REFACTORING_NEWRELEASE_H
#define LAB5_REFACTORING_NEWRELEASE_H

#include "PriceCode.h"

class NewRelease : public PriceCode {
private:
    static NewRelease *instance;
    NewRelease() = default;
public :
    NewRelease(const NewRelease&) = delete;
    NewRelease& operator=(const NewRelease&) = delete;
    static NewRelease* getNewReleasePriceCode();
    double getAmountForDays(int days) override;
    int getRenterPoints(int days) override;
};
#endif //LAB5_REFACTORING_NEWRELEASE_H
