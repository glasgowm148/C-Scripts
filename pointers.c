// Mark Glasgow

#include <stdio.h>

int main(void)
{
    int i, *myPtr, **myPtrPtr;
    int a[2] = {1, 2};

    i = 6;
    myPtr = &i; // Set (pointer) to address
    myPtrPtr = &myPtr; // Set (pointer) to address

    {
        int i = 7;
        *myPtr = 45;  // myPtr := i 

        printf(" The value %d is stored in location %p \n", *myPtr, myPtr); // add * for value

        printf(" The value %d is stored in location %p\n", i, &i); // add & for address
    }

    printf(" The value %p is stored in the location %p\n", *myPtrPtr, &myPtrPtr); //  add * for value, add & for address
   
    printf(" The value of i (outer) is %d \n", **myPtrPtr); // dereferencing twice - gets the value stored in i 


    printf(" The value %d is stored in location %p\n", i, &i); // add & for address

 
    printf("a : %p, '&a :%p' '*a : %d' 'a[0] : %d' 'a[1] : %d' ", a, &a, *a, a[0], a[1]);
    // a : 0x7ffeebb20a10, -- ?? 
    // &a :0x7ffeebb20a10'- Address location of a[]
    // *a : 1 -- * points to a[0]
    // a[0] : 1 -- a[0] as expected
    // a[1] : 2' ⏎- a[1] as expected
    return 0;
}


// int thing :: declare an integer variable called “thing” 
// &thing :: address of variable “thing” (a pointer)
// ∗thing ::  the contents of the memory location with number “thing” 
// int *thing_ptr :: declare a “pointer to an integer” variable 
// ∗thing_ptr :: integer variable at the address “thing_ptr” points to 
// &thing_ptr :: the memory location in which thing_ptr is stored
