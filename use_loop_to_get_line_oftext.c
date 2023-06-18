#include<stdio.h>
int main()
{
    char line[81],character;
    int c=0;
    printf("Enter text. Press Enter at end\n");
    do {
    character = getchar();
    line[c] = character;
    c++;
    }
    while(character!='\n');
    printf("%d",c);
    c=c-1;
    line[c] = '\0';
    printf("\n%s\n",line);
    return 0;
}