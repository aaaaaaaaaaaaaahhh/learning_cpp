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
   2. to free: `delete [] p_numbers;`
   

## pointer arithmetic
1. you can perform arithmetic computations with pointers, because they are just numbers
   1. you can do the same thing as `x[3] = 120` by doing `*(x + 3) = 120`
      1. this is CRAZYYYY
      2. this is not adding 3 to the value of x, instead it is adding `3 * sizeof(int)` to the value of x
      3. sizeof gives you the size of a variable in bytes


## 2d arrays
1. when you try to access a 2d array, the computer decomposes your query into pointer arithmetic, something like `*(array + <height> * <width_of_array> + <width>)`

## pointers to pointers
1. pointers can point to other pointers
2. to declare a pointer to pointer: `int **p_p_x;`
   1. points to a memory address that conatins a pointer to an integer
3. we can use this to make 2d arrays of arbitrary size
   1. a pointer that points to an array of pointers, each pointing to a different array
4. you cannot pass a pointer to a pointer into a function
5. 