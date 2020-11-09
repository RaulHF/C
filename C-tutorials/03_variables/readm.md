A variable in C has the folowing properties:

1) It has a type.
2) It has a value.
3) It has a memory location.

As it has been shown before the c language is a typed language. Consequently, all the variables used by the c language have a type property. This type property reserves a number of bytes in memory. This is done at definition time.

The value that a variable can take is directly related to the variable type. For instance a char takes an ascii character as input. Depending on the machine archtecture the interpreter eserves a number of bytes in memory so the variable value can be stored with a default precision.

In addtion variables can be explicitly and implicitly cast. The cast mechanism is when the user converts a variable type during execution time for a given operation. For instance the user can cast an int variable into a float variable or a double variable for a given operation. The interpreter can cast implicitly, however, it is always good practice to do so explicitly within the code.
