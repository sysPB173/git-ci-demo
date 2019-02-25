/** 
 * @file main.cpp
 * @author Martin Ukrop
 * @licence MIT Licence
 */

#include "fact.h"

// Tell CATCH to define its main function here
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Factorial testing", "[factorial]") {
    CHECK(MyMath::factorial(1) == 1);
    CHECK(MyMath::factorial(2) == 2);
    CHECK(MyMath::factorial(3) == 6);
    CHECK(MyMath::factorial(10) == 3628800);
    CHECK(MyMath::factorial(-1) == 0);
    CHECK(MyMath::factorial(20) == 2432902008176640000ll); // number is artificially cut
}
