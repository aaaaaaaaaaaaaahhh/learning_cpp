## pointers
1. variables that point to a specific location in memory
   1. they store that location
2. we can use pointers to pass the address of a structure to a function instead of copying the data and passing that
3. can either refer to:
   1. a memory address itself
   2. a variable that stores a memory address
4. the stack is the same as java, but the heap is defined as the "free store" which is memory that can be requested in chunks
   1. the owner of that memory(the code that uses that memory) has to release that memory after it is run
   2. if you dont return the memory, computer slows down, memory leak
5. you can accidently use invalid memory(memory that has not been handed out for you to use yet) by using a pointer that has not been initialized