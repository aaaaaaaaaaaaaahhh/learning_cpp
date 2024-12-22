## pseudo random numbers
1. `void srand(int seed);`
   1. srand sets your seed
   2. usually you give srand the current time, using the time function
      1. `srand(time(NULL));`
   3. you must `#include <cstdlib>` for srand
   4. and `#includ <ctime>` for time function
2. `int rand();`
   1. returns a number between 0 and a constant called RAND_MAX(at least 32767)
   2. usually we use the modulus operator to divide it by the range and add the lower bound of the range