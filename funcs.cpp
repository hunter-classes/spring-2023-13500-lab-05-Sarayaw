#include <iostream>
#include "funcs.h"

bool isDivisibleBy(int n, int d){
    return n % d == 0;
}

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2; i*i <= n; i++){
        if(isDivisibleBy(n, i)){
            return false;
        }
    }
    return true;
}

int nextPrime(int n){
    int i = n + 1;
    while(!isPrime(i)){
        i++;
    }
    return i;
}

int countPrimes(int a, int b){
    int count = 0;
    for(int i = a; i <= b; i++){
        if(isPrime(i)){
            count++;
        }
    }
    return count;
}

bool isTwinPrime(int n){
    return isPrime(n) && (isPrime(n - 2) || isPrime(n + 2));
}

int nextTwinPrime(int n){
    int i = n + 1;
    while(!isTwinPrime(i)){
        i++;
    }
    return i;
}

int largestTwinPrime(int a, int b){
    for(int i = b; i >= a; i--){
        if(isTwinPrime(i)){
            return i;
        }
    }
    return -1;
}
