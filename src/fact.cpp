#include "fact.h"

int MyMath::factorial(int n) {
    int product = 1;
    if (n < 0) return 0;
    for (int i = n; i > 0; i--) {
        product *= i;
    }
    return product;
}
