#include <stdio.h>

struct TwoDPoint { 
    double x, y;
    };

int main(void) {
    struct TwoDPoint p[1] = {{0.0,0.0}}; // Changed to an array

    // code doesn't need to be in a seperate block ? Not sure why it was ? 

    char input[100];
    
    // change instances of %l to $lf and use &(x.x) throughout
    // %lf :: %f expects argument of type ‘float *
    //        %fl expects argument double *   
    // &() :: turns argument from double --> double* 
    // update a = p[0], b = p[1]
    
    puts("Please enter the x and y coordinates of the 1 st point, separated by a comma.");
    fgets(input, sizeof(input), stdin); sscanf(input,"%lf,%lf", &(p[0].x),&(p[0].y));
    puts("Please enter the x and y coordinates of the 2 nd point, separated by a comma.");
    fgets(input, sizeof(input), stdin); sscanf(input,"%lf,%lf", &(p[1].x),&(p[1].y));
    
    

    double x_dist = (p[0].x - p[1].x), y_dist = (p[0].y - p[1].y);
    
    printf("The square of the distance between the two points is: %f\n", (x_dist*x_dist)+(y_dist*y_dist));
    
    return 0; 
    
}
