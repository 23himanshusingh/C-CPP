#include <stdio.h>
#include <stdlib.h>

int main(){
    struct {
short s [5];
union {
float y;
long z;
}u;
}t;
printf("%d\n", sizeof(t));
return 0;
}