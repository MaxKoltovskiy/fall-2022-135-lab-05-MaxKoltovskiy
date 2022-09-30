#include <iostream>


#include "funcs.h"

int main()
{

  std::cout<< "isDivisibleBy(100,25) = " << booleanOutput( isDivisibleBy(100,25) ) << "\n";
  std::cout<< "isDivisiblyBy(35,17) = " << booleanOutput( isDivisibleBy(35,17) ) << "\n";
  std::cout<< "------------------------------------\n";

  std::cout<< "isPrime(47) = " << booleanOutput( isPrime(47) ) << "\n";
  std::cout<< "isPrime(39) = " << booleanOutput( isPrime(39) ) << "\n";
  std::cout<< "------------------------------------\n";
  
  std::cout<< "nextPrime(11) = " << nextPrime(11) << "\n";
  std::cout<< "nextPrime(47) = " << nextPrime(47) << "\n";
  std::cout<< "------------------------------------\n";

  std::cout<< "countPrimes(3,15) = " << countPrimes(3,15) << "\n";
  std::cout<< "countPrimes(16,45) = " << countPrimes(16,45) << "\n";
  std::cout<< "------------------------------------\n";

  std::cout<< "isTwinPrime(5) = " << booleanOutput( isTwinPrime(5) ) << "\n";
  std::cout<< "isTwinPrime(34) = " << booleanOutput( isTwinPrime(34) ) << "\n";
  std::cout<< "------------------------------------\n";

  std::cout<< "nextTwinPrime(0) = " << nextTwinPrime(0) << "\n";
  std::cout<< "nextTwinPrime(36) = " << nextTwinPrime(36) << "\n";
  std::cout<< "------------------------------------\n";

  std::cout<< "largestTwinPrime(19,28) = " << largestTwinPrime(19,28) << "\n";
  std::cout<< "largestTwinPrime(37,40) = " << largestTwinPrime(37,40) << "\n";
  std::cout<< "------------------------------------\n";
  return 0;
}
