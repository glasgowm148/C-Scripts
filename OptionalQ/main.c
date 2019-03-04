#include <stdio.h>
#include "function.h"

int global = 4;

int * f1(int a){
	int b = a*2;
	return &b;
}

int f2(int x){
	int y;
	y = (x+2)*13;
	return y;
}

int main(void){

	int *p = f1(32);
	int b = 67;
	int c = *p;
	f2(global);
	int c2 = *p;

	printf("Values in c: %d c2: %d\n", c, c2);
	printf("Result of recursive(4,1): %d\n", recursive(4,1));

	return 0;
}
