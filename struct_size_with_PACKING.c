#include <stdio.h>
#pragma pack(1)
struct{
    short s[5];
    union{
        float y;
        long long z;

    }u;
}t;
int main()
{

    
    printf("sizeof t %d",sizeof(t));
    
    return 0; 

}