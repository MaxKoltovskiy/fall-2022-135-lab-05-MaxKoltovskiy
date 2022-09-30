#include <iostream>
#include "funcs.h"

// add functions here
bool isDivisibleBy(int one, int two) {
    if(!(one % two)) {
        return true;
    }
    else {
        return false;
    }
}

std::string booleanOutput(bool test) {
    if(test) {
        return "Yes";
    }
    else {
        return "No";
    }
}

bool isPrime(int num) {
    if(num <= 1)
        return false;
        
    for(int i = 2; i< num; i++) {
        if( isDivisibleBy(num,i) ) {
            return false;
        }
    }
    return true;
}

int nextPrime(int num) {
    do{
        num++;
    }while(!(isPrime(num)) );
    
    return num;
}

int countPrimes(int first, int second) {
    int primes = 0;
    for(int i = first; i<= second; i++) {
        if(isPrime(i)) {
            primes++;
        }
    }
    return primes;
}

bool isTwinPrime(int num) {
    if(!isPrime(num))
        return false;

    if(isPrime(num+2) || isPrime(num-2)) {
        return true;
    }
    else {
        return false;
    }
}

int nextTwinPrime(int num) {
    do{
        num++;
    }while(!(isTwinPrime(num)) );

    return num;
}

int largestTwinPrime(int lower, int upper) {
    for(int i = upper; i>= lower; i--) {
        if(isTwinPrime(i))
            return i;
    }
    return -1;
}


