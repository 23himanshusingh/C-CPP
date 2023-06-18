#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct balance{
    char name[100];
    int account_no;
    int balance;
};
void print_balance(struct balance *b,int n){
    // printf("Customers with balance less than Rs.1000 are: ");
    for (int i=0;i<n;i++){
        if(b[i].balance<1000){
            printf("%s\n",b[i].name);
        }
        else if(b[i].balance>10000){
            b[i].balance=b[i].balance+100;
        }
    }
    // printf("Final balance of Customers with balance above Rs.10000 are: ");
    for (int i=0;i<n;i++){
        if(b[i].balance>10000){
            printf("%s %d\n",b[i].name,b[i].balance);
        }
    }


}
int main(){
    int n;
    scanf("%d",&n);
    struct balance b[n];
    for (int i=0;i<n;i++){
        scanf("%s %d %d",b[i].name,&b[i].account_no,&b[i].balance);
    }
    print_balance(b,n);

}

