// Mark Glasgow
// Write a function, called factorial which, when passed an int, 
// returns the factorial of that number, by using an appropriate loop inside the function.
#include <stdio.h>
#include <stdlib.h> // for atoi()

int rfactorial(int n)
{
    // if n is smaller than 1, simply return 1
    if(n < 1) 
        return 1;
    return rfactorial(n - 1) * n; // recursive call (n!) 
}

int factorial(int n)
{
    int result = 1;

    // !n 
    for (int i = 1; i <= n; i++)
        result = result * i;
    
    return result;
}

int main(int argc,char* argv[])
{
    // remove unused parameter warning
    // iterate through arguments using i and compare to the number of arguments passed (argc) 
    for (int i = 1; i < argc; ++i)
    {
         printf("Factorial of %d is : %d \n", atoi(argv[i]),  factorial(atoi(argv[i]))); // atoi for string -> decimal
         printf("Factorial of %d calculated recursively is :  %d \n", atoi(argv[i]),  rfactorial(atoi(argv[i])));
    }
    return 0;
}



