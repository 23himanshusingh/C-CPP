#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0,i=11,sum=0,c,j;
    while(count<n){
        c=0;
        for(j=2;j<i/2;j++){
            if (i%j==0){
                c++;
                break;
            }
        }
        if (c==0){
            sum+=i;
            i+=10;
            count++;
            
        }
        i+=10;
    }
    printf("%d",sum);
    return 0;
}