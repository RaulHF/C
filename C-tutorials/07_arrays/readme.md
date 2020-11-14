An array is an object that allows the user to store variables in an indexable way. The array name is an alies for the memory address where the array is being store. We will see that for strings arrays this is a bit different.

The first object of the arrary is the name memory address and it stops at the name memory address + the type size. In my current PC an int is 4bytes, a char is 1 byte a float is 4 bytes and a double is 8 bytes, however, this will vary in different architectures.

It is important to understand that an array index starts at 0 and correlates wit the name memory location, an array index can be though as the memory location where the first element of the array is stored. The second element of an array is stored at index 1 which correlates at the memory location array name + type size. It is worth noting that the begining of array[1] is the same memory location that the end of array[0]. This is important because it dictates that all arrays must have a memory continuity from begining to end.

In C99 and C11, as it is shown in the given example, the user can define an array, compile the program and at run time the user can give the length of the array. This technique is call variable length array.

Memory allocation array is a technique use to increase the length of an array during run time. It is worth noting that an array needs to have a contigous memory, so that the indexing mechanism works.

To use memory allocation the c language uses malloc or calloc functions. In addtion, there are functions like realloc, which allows the user to re allocate memory to an array, in other words change the size of the array. It is worth noting that the allocated memory needs to be freed once the user does not need it any more.

To pass an array to a function we need to pass the array by reference. This means that we pass the memory adrees of the array to the function. It is always advazable to send the size of the passing array as another argument to the function. 

To pass an statically define array, in other words an array that has been previously define in the program. It is worth noting that malloc returns a pointer to void. Once the array is statically define, already in memory, we can increase the memory by taking the address of the array an passed it into malloc. It is worth noting that the pointer to the memory that is being allocated seats in the stack and the memory that is allocated seats in the heap.

To pass an multiple dimenstion array.

To pass a string array.
