#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Divisible By"){
    CHECK(isDivisibleBy(25,5) == true);
    CHECK(isDivisibleBy(67,31) == false);
}
TEST_CASE("Yes/No output of booleans"){
    CHECK(booleanOutput(true) == "Yes");
    CHECK(booleanOutput(false) == "No");
}
TEST_CASE("Is Prime"){
    CHECK(isPrime(1) == false);
    CHECK(isPrime(2) == true);
    CHECK(isPrime(31) == true);
    CHECK(isPrime(16) == false);
}
TEST_CASE("Next Prime Number"){
    CHECK(nextPrime(1) == 2);
    CHECK(nextPrime(2) == 3);
    CHECK(nextPrime(3) == 5);
    CHECK(nextPrime(24) == 29);
}
TEST_CASE("Prime Counter"){
    CHECK(countPrimes(1,3) == 2);
    CHECK(countPrimes(2,10) == 4);
}