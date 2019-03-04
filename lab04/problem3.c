// Mark Glasgow :: 2336003G
// Exercise 3: Functions and Arrays and CLA

// Code incomplete 
// currently outputs for input 5x5
// P2 5 5 255 
//  0  1  2  3  4  
//  0  1  2  3  4  
//  0  1  2  3  4  
//  0  1  2  3  4  
//  0  1  2  3  4 
#include <stdio.h>
#include <stdlib.h>


#define P "P2"
#define MAX 255
int ROWS = 0; // need to declare these globally
int COLS = 0;

// fill_array() : one function which takes an array (and values for its dimensions) and fills it with the desired image, 
unsigned char fill_array(int ROWS, int COLS)
{										
    unsigned char arr[ROWS][COLS];
    for (int i = 0; i<ROWS; i++)
    {
        for (int j = 0; j<COLS; j++)
            arr[i][j] = 0;
    }
    return arr;
}

// print_image() : one function which takes an array (and values for its dimensions) and prints the corresponding PGM image to the console, 
char print_image(unsigned char arr)
{                                   
    printf("%s %d %d %d", P, ROWS, COLS, MAX);
    for(int i=0; i<ROWS; i++)
    {
        printf(" \n ");
        for(int j=0; j<COLS; j++)   
        {  
            printf(" %d ", arr[&i][&j]);  
        }
    }			
}

// main() : and the remaining logic in main (which should just need to set up variables, and then call the two functions you just made).
int main(void)
{
    printf("### Image Maker ###\n");
    printf("Please enter the number of rows you would like: \n");
    scanf("%d",&ROWS);
    printf("Please enter the number of columns you would like: \n");
    scanf("%d", &COLS);

    unsigned char arr = fill_array(ROWS, COLS);
    print_image(&arr);
		
        
    return 0;
}



