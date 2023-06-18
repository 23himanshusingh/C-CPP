
//Create a function as a macro in multi-line to swap the value of two variables


#include<stdio.h>
#define SWAP(x,y) int t=x;\
                  x=y;\
                  y=t;
int main(){  
    int a,b;
    scanf("%d%d",&a,&b);
    SWAP(a,b)
    printf("a=%d\nb=%d",a,b);
    return 0;
}
