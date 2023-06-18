#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0,i=11,sum=0,c,j;
    while(count<n){
        c=0;
        for(j=2;j<i/2;j++){
            if (i%j==0){
                c++;//1
                break;
            }
        }
        if (c==0){
            if (i%10==1){
                sum+=i;
                i++;//12
                count++;//1
            }
        
        
        }
        i++;
    }
    printf("%d",sum);
    return 0;
}