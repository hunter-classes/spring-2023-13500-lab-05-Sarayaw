#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

//Task A
TEST_CASE("Are they divisible?"){
    CHECK(isDivisibleBy(49, 7) == true);
    CHECK(isDivisibleBy(97, 13) == false);
}

// Task B
TEST_CASE("Are they prime?"){
    CHECK(isPrime(46) == false);
    CHECK(isPrime(28) == false);
    CHECK(isPrime(67) == true);
    CHECK(isPrime(19) == true);
}

// Task C
TEST_CASE("Next Smallest Prime"){
    CHECK(nextPrime(-1) == 2);
    CHECK(nextPrime(19) == 23);
    CHECK(nextPrime(7) == 11);
}

// Task D
TEST_CASE("Range of Primes"){
    CHECK(countPrimes(-1, 5) == 3);
    CHECK(countPrimes(4, 10) == 2);
    CHECK(countPrimes(1,11) == 5);
    CHECK(countPrimes(14,16) == 0);
}
// Task E
TEST_CASE("TwinPrimes"){
    CHECK(isTwinPrime(3) == true);
    CHECK(isTwinPrime(79) == true);
    CHECK(isTwinPrime(20) == false);
}

//Task F
TEST_CASE("Next Smallest TwinPrimes"){
    CHECK(nextTwinPrime(7) == 11);
    CHECK(nextTwinPrime(23) == 29);
}

// Task G
TEST_CASE("Largest TwinPrimes"){
    CHECK(largestTwinPrime(37, 42) == 41);
    CHECK(largestTwinPrime(71, 97) == 97);
}
