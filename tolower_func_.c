// C program to demonstrate
// example of tolower() function====== int tolower(int ch);
// If the character passed in the tolower() is any of these three

// 1. lowercase character

// 2. special symbol

// 3. digit

tolower() will return the character as it is.
#include <ctype.h>
#include <stdio.h>
 
int main()
{
    int j = 0;
    char str[] = "GeEks@123\n";
    char ch;
 
    while (str[j]) {
        ch = str[j];
        putchar(tolower(ch));
        j++;
    }
 
    return 0;
}