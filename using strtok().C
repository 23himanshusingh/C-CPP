// Splits str[] according to given delimiters.
// and returns next token. It needs to be called
// in a loop to get all tokens. It returns NULL
// when there are no more tokens.
//char * strtok(char str[], const char *delims);

// A C/C++ program for splitting a string
// using strtok()
#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[1000];

    fgets(str,1000,stdin);
 
    // Returns first token
    char *token = strtok(str, " ");
   
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
 
    return 0;
}