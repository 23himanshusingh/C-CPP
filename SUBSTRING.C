#include <stdio.h>
void printSubstrings(char str[])
{

    for (int start = 0; str[start] != '\0'; start++) {

        for (int end = start; str[end] != '\0'; end++) {

            for (int i = start; i <= end; i++) {
                printf("%c", str[i]);
            }
           
            printf("\n");
        }
    }
}
 

int main()
{
 
    char str[] = { 'a', 'b', 'c', 'd', '\0' };
    printSubstrings(str);
    return 0;
}