#include <math.h>
#include <stdio.h>
 
int main()
{   int n;
    scanf("%d",&n);
    int a1,a2,a3;
 
    // Using typecasting for
    // integer result
    a1 = (int)(pow(n, 2) + 1e-9);
    a2 = (int)(pow(n, 3) + 1e-9);
    a3 = (int)sqrt(n);
    printf("%d\n%d\n%d", a1,a2,a3);
 
    return 0;
} 