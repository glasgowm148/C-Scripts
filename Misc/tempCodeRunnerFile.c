#include <stdio.h>

int main(void) {

int i,*myPtr , **myPtrPtr; int a[2] = {1,2};

i = 6; myPtr = i; myPtrPtr=myPtr; {

int i = 7;

myPtr = 45;

printf(" The value %d is stored in location %p\n" , myPtr ,myPtr);

printf(" The value %d is stored in location %p\n" , i, i ); }

printf(" The value %p is stored in the location %p\n" , myPtrPtr , myPtrPtr);

printf(" The value %d is stored in location %p\n" , i, i);

return 0;

}