#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int k,n,res=1;
    scanf("%d",&k);
    scanf("%d",&n);

    k=n-k;
    for (int i=0;i<k;++i){
        res*=(n-i);
        res/=(i+1);
    }
    printf("%d",res);
    
}