/*
 * PGM output code - Lab 3
 * Starting with your code from Lab 4, 
 * 
 * split out the function to print out the PGM file into a separate C source file (called printpgm.c ). 
 * 
 * Create an appropriate header file to allow your function to be used in other code. 
 * Modify the code in the original file to include the header file appropriately. 
 * Compile your two C files, and link appropriately, and test that the code still does what it is supposed to do.
 * */
#include <stdio.h>
#include <string.h>
#include "printpgm.h"

void print_array(int x_max, int y_max, unsigned char arr[x_max][y_max]) {
	printf("P2 %d %d 255\n", x_max, y_max);
	//image
	for(int i=0;i<x_max;i++) {
		for(int j=0;j<y_max;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n"); //end row
	}
}

void fill_array(int x_max, int y_max, unsigned char arr[x_max][y_max]) {
	for(int i=0;i<x_max;i++) {
		for(int j=0;j<y_max;j++) {
			//image kernel - the real part of the square of the complex plane
			//(scaled to -1..1 on both axes)
			float is = 2*i/(float)x_max - 1.0;
			float js = 2*j/(float)y_max - 1.0;
			arr[i][j] = ((is*is - js*js)+2)*63;
		}
	}
}

int main(int argc, char * argv[]) {
	//input handling as per spec
	if (argc > 1) {
		for (int i=1;i<argc;i++) {
			if (strcmp(argv[i],"-h")==0) {
				puts("This program generates a 100x100 PGM format image of z**2, in the range -1..1,-i..i");
				return 0;
			}
		}
	}
	unsigned char array[100][100] ;
	//fill image array
	fill_array(100,100, array);
	//print image array
	print_array(100,100, array);
}
