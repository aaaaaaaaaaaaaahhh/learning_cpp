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

## pointer arithmetic
1. `x[3] = 120;` is the same as `*(x + 3) = 120;`


### 2d arrays
1. 2d arrays work like 1d arrays with pointer arithmetic, except more complicated
   1. `array[3][2]` is the same as`*(array + 3 * <width of array> + 2)`
   2. so you can only define a 2d array with the last or both indeces


## pointers to pointers
1. a pointer to pointer is a pointer that points to another pointer
   1. EX: `int **p_p_x;`
   2. must be provided a memory address
2. we can use pointer to pointers to make 2d arrays that are distributed
   1. instead of them being contiguous, these new 2d arrays are made up of smaller arrays
      1. first a pointer to an array of pointers
      2. each pointer in this array points to another array containing the "rows" of the 2d array
3. you cant pass a double pointer to a function as if it were a 2d array
   1. this is becuase the function is probably using code that works based on usual 2d arrays