## structures
1. similar to classes in java, except without constructors and other complexities
   1. following this pattern, there are no getters/setters in c++, you can just `struct_name.field1 = thing1;`
2. at the most basic level, allows you to group common variables together in fields
3. EX:
    ```
    struct SpaceShip
    {
        int x_coordinate;
        int y_coordinate;
        string name;
    };

    Spaceship s;
    ```
4. passing structures to functions is a little different then java though. when you pass a structure to a function, what really happens is that structure gets copied and the copy becomes what is passed to the function.