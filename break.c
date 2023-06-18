# include <stdio.h>
int main(){
    printf("enter value of n\n");
    int n,sum=0;
    scanf("%d",&n);
    for (int i=1;;i++){
        if (i>n){
         break;   
        }
        else{

            sum+=i;//1+2+3+4+5=15
            

        }
    }
    printf("%d",sum) ;  



    return 0;
}