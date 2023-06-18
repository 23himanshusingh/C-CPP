#include<stdio.h>
int main(){
    int a = 42;

    int *p = &a;
    ++p;    // to what does p point now?

    printf( "%d\n", *p);  // what gets printed?

    printf("%d\n", *(p + 5));  // what gets printed?

    return 0;

}






