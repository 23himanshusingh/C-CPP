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
    char str[1000],res[100][100];int k=0;

    // fgets(str,1000,stdin); 
    scanf("%[^\n]%*c",str);

 
    // Returns first token
    char *token = strtok(str, " ");
   
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {   
        strcpy(res[k++],strrev(token));

        // printf("%s\n", token);
        token = strtok(NULL," ");
    }
    for (int i=0;i<=k;i++){
        printf("%s ",res[i]);
    }
    
 
    return 0;
}