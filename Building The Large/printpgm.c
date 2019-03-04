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