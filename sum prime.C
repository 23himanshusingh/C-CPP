#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0,i=11,sum=0,c,j;
    while(count<n){
        c=0;
        for(j=2;j<i;j++){
            if (i%j==0){
                i++;
                c++;
                break;
            }
        }
        if (c==0){
            if (i%10==1){
                sum+=i;
                i++;
                count++;
            }
            
        }
        printf("%d",count);
    }
    printf("%d",sum);
    return 0;
}