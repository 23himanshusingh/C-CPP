#include <stdio.h>
#include <string.h>

int main(){

    char string[1000];
    fgets(string,1000,stdin);

    int len = 0;
    for(len = 0;string[len] != '\n';len++){
        printf("%c %d\n",string[len],len);
    }

    printf("%d",len);

    return 0;
}