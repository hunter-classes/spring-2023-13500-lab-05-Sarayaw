#include <iostream>
#include "funcs.h"

int main() {
//Task A
    std::cout << "Is divisible? \n";
    std::cout << "isDivisibleBy(100, 25)\n";
    std::cout << std::boolalpha << isDivisibleBy(100, 25) << "\n";
    std::cout << "isDivisibleBy(35, 17)\n";
    std::cout << std::boolalpha << isDivisibleBy(35, 17) << "\n";
    std::cout << "\n--------------\n";
    
//Task B
    std::cout << "Is a prime? \n";
    std::cout << "isPrime(11)\n";
    std::cout << isPrime(11) << "\n";
    std::cout << "\n--------------\n";
    
//Task C
    std::cout << "Next prime? \n";
    std::cout << "nextPrime(14)\n";
    std::cout << nextPrime(14) << "\n";
    std::cout << "\n--------------\n";
    
//Task D
    std::cout << "Count prime? \n";
    std::cout << "countPrimes(11, 17)\n";
    std::cout << countPrimes(11, 17) << "\n";
    std::cout << "\n--------------\n";

//Task E
    std::cout << "Is twin prime? \n";
    std::cout << "isTwinPrime(13)\n";
    std::cout << isTwinPrime(13) << "\n";
    std::cout << "\n--------------\n";

//Task F
    std::cout << "Next twin prime? \n";
    std::cout << "nextTwinPrime(13)\n";
    std::cout << nextTwinPrime(13) << "\n";
    std::cout << "\n--------------\n";
    
//Task G
    std::cout << "Largest twin prime? \n";
    std::cout << "largestTwinPrime(13)\n";
    std::cout << largestTwinPrime(5, 18) << "\n";
    std::cout << "\n--------------\n";

    return 0;
}
