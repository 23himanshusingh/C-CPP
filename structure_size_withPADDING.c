#include<stdio.h>
struct {
short s [5];
union {
float y;
long long z;
}u;
}t;
int main(){
    printf("sizeof short %d\n",sizeof(short));
    printf("sizeof float %d\n",sizeof(float));
    printf("size of long long %d\n",sizeof(long long));

    printf("size of t %d\n",sizeof(t));

}