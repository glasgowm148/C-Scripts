#include <stdio.h>

struct TwoDPoint { 
    double x, y;
    };

int main(void) {
    struct TwoDPoint a,b = {0.0,0.0}; // TwoDPoint_t was undefined - should be changed here or after the } in struct

    // code doesn't need to be in a seperate block ? Not sure why it was ? 

    char input[100];
    
    // change instances of %l to $lf and use &(x.x) throughout
    // %lf :: %f expects argument of type ‘float *
    //        %fl expects argument double *   
    // &() :: turns argument from double --> double* 
    puts("Please enter the x and y coordinates of the 1 st point, separated by a comma.");
    fgets(input, sizeof(input), stdin); sscanf(input,"%lf,%lf", &(a.x),&(a.y));
    puts("Please enter the x and y coordinates of the 2 nd point, separated by a comma.");
    fgets(input, sizeof(input), stdin); sscanf(input,"%lf,%lf", &(b.x),&(a.y));
    
    

    double x_dist = (a.x - b.x), y_dist = (a.y - b.y);
    
    printf("The square of the distance between the two points is: %f\n", (x_dist*x_dist)+(y_dist*y_dist));
    
    return 0; 
    
}
