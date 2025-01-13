## dynamic memory allocation
1. dynamic allocation means requesting as much memory as needed while your program is running
2. the keyword new is used to initialize pointer with memory from the free store(free dynamic memory)
   1. EX: `int *p_int = new int;`
   2. the new operator takes an example variable from which it computes the size of the memory needed
   3. whatever code gets new memory from the free store has to return this memory, an action called "freeing" the memory
      1. to return the memory you use the delete keyword, which frees up the memory allocated through new
         1. EX: `delete p_int;`
      2. after you delete a pointer you should set it to NULL again
3. references and dynamic allocation
   1. in general, dont store memory that you just allocated in a reference
      1. this is because it does not provide immediate access to the memory address

## pointers and arrays
1. pointers can store the address of the first element of an array, thereby storing the entire array
2. dynamic allocation
   1. EX: `int *p_numbers = new int[8];`
   2. to free: `delete[] p_numbers;`
   3. 