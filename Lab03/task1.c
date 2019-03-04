#include <stdio.h>
#include <stdlib.h>

#define ROWS 5
#define COLS 5
#define P "P2"
#define MAX 255


int main(void)
{
		
        unsigned char arr[ROWS][COLS] = 
				{
													{ 0, 255, 0, 255, 0 }, 
													{ 255, 0, 255, 0, 255 }, 
													{ 0, 255, 0, 255, 0 },
													{ 255, 0, 255, 0, 255 }, 
													{ 0, 255, 0, 255, 0 },
												
        };
													
				printf("%s %d %d %d", P, ROWS, COLS, MAX);
				for(int i=0; i<5; i++)
				{
					printf(" \n ");
					for(int j=0; j<5; j++)   
						{  
							printf(" %d ", arr[i][j]);  
						}
				}
					

        return 0;
}