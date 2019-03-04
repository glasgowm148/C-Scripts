// Mark Glasgow :: 2336003G
// Exercise 2: Strings
// This is a coding question.
// Write a program which reads in a string, of up to 100 characters, after prompting the user to do so.
// The program should tell the user how long the string they entered was.

// The program should then lowercase the string (replacing any uppercase characters with their lowercase equivalents). 
// You can use the two functions isupper, which returns true if the char it is given is uppercase, and tolower,
//  which re- turns the lowercase equivalent to the char it is given. These need ctype.h to be included.

// If the new string is the same as the old string, the code should tell the user that their string was all lowercase.
// Otherwise, it should print the new, all lowercase, string. As always, add appropriate comments to your code.

#include <stdio.h> 
#include <ctype.h>
#include <string.h>

#define MAX 100

  
int main(void) 
{ 
    // initialise a char array of size MAX (100)
    char input[MAX];

    // intialise found to 'f' - so that we can check if any uppercase characters were found. 
    char found = 'f';

    printf("You can enter up to 100 characters. Hit enter to confirm: ");

    // get user input from stdin 
    fgets (input, MAX, stdin);

    // use strlen to get the characters entered
    printf("You entered %lu characters \n",  strlen(input)-1 );
    printf("Checking string for uppercase... \n");
    

    int i = 0; // initialise iterator
    // while string - '`\0' added for clarity. 
    while(input[i]!='\0'){ 
        if(isupper(input[i])) // if the current character is uppercase
            found = 't'; // found = 't' for True as if uppercase was triggered
            input[i] = tolower(input[i]); // convert to lowercase and store in array
            printf("%c",input[i]); // print the new letter
            i++; // incriment counter

    }
    if(found == 'f') // if found was never changed to True
        printf("No uppercase characters found");

    return 0;
		
}