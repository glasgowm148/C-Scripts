#include <stdio.h>
#include <string.h>
#include <limits.h>  // INT_MAX
#include <assert.h>  // assert number is < INT_MAX
#include <stdlib.h> // for strtol

#include "turtle.h"

int main(int argc,char* argv[]){
    int sides;
    // Check if argument 'square' is passed through, if so draw a square. 
    if(0 == strcmp(argv[1], "square")) {
        sides = 4; 
    } else {
         sides = strtol(argv[1], NULL, 0); // capture the input into an integer. 
        assert(sides <= INT_MAX); // Assert within INT_MAX to prevent overflow
    }

    long angle =  360 / sides; // Calculate the turning angle. 
    
    turtle_init(256,256); // Initialise turtle to draw 
    
    for(int i=0; i< sides; i++) {
        turtle_forward(50); // Move forward 50px
        turtle_turn_left(angle); // Turn
    }
    turtle_save_png("mylogo.png"); // Once the shape is drawn, save the png

    turtle_cleanup(); // cleanup memory
    return 0;
} 

// gcc --std=c99 -I includes external_libraries.c libturtle.a -lm -o ExeFile