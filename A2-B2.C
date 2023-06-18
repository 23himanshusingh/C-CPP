#include<stdio.h>
int main(){
    int n,age,wt,c1=0,c2=0,c3=0,c4=0;char ch; scanf("%d",&n);
    while(n--){
        scanf("%c\n",&ch);
        scanf("%d\n",&age);
        scanf("%d\n",&wt);
        if(ch=='B'){
            if(age>18 && wt>=50){
                c1++;
            }
            else if(!(age>18) || !(wt>=50)){
                c3++;
            }
            
        }
        else if(ch=='G'){
            if(age>18 && wt<50){
                c2++;
            }
            else if(!(age>18) || !(wt<50)){
                c4++;
            }
        }

    }
    printf("%d\n%d\n%d\n%d",c1,c2,c3,c4);
    return 0;
}
