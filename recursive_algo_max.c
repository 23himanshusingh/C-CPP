//given a positive integer x,write a recursive algorithm to print maximum digit y and the occurence count of y in x
#include<stdio.h>
int main(){
    int x,y,count=0;
    scanf("%d",&x);
    while(x>0){
        y=x%10;
        count+=findDigit(x,y);
        x=x/10;
    }
    printf("%d %d",y,count);
    return 0;
}