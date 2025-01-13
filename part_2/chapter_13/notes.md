## pointer syntax
1. `<type> *<ptr_name>;`
   1. EX: `int *ptr_to_int;`
   2. the * declares the variable to be a pointer
   3. the variable type is needed because the pointer must know the type of data that the address points to
2. to get the memory address of a variable, use &, called the address-of operator
   1. EX:
     ```
        int x;
        int *p_x = & x;
        *p_x = 2;
     ```
3. calling the pointer like a regular variable just gives you the address stored
   1. EX: 
     ```
     int x = 5;
     int *pointer = & x;
     cout << pointer; // same as cout << & x;   
     ```
   2. to access the value at that location, use * before
      1. EX: 
        ```
        int x = 5;
        int *pointer = & x;
        cout << *pointer; // would output 5, equilalent to cout << x; 
        ```
4. using * to get a value is called dereferencing the pointer
5. uninitialized pointer can reference other parts of memory(bad not good). to avoid this you can set all pointers to NULL to let everyone know that they are unintialized

## pointers and functions
1. passing just variables to a function that changes them does not in fact change them and only changes the local variables that they become(get copied)
   1. with pointers though we can point directly to the address and actually change those values

## references
1. references are like pointers without the need for a special * and & syntax. its a variable refering to another variable, sharing the same backing memory
2. declared with `int &ref;`
   1. this is actual illegal because references must always be declared
3. with a reference you always get the value, never the address
   1. EX: 
    ```
    struct myBigStruct{
        int x[100];
    };

    void takeStruct(myBigStruct& my_struct) {
        my_struct.x[0] = 1;
    }

    ```
4. a reference cannot change the variable it points to
