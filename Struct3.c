#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5
struct party_expanse{
    char item[50];
    int quantity;
    float price;
};
int main(){
    struct party_expanse p[N];
    for (int i=0;i<N;i++){
        printf("Enter details of item %d\n",i+1);
        printf("Enter item: ");
        scanf("%s",p[i].item);
        printf("Enter quantity: ");
        scanf("%d",&p[i].quantity);
        printf("Enter price: ");
        scanf("%f",&p[i].price);
    }
    for (int i=0;i<N;i++){
        printf("\nDetails of item %d\n",i+1);
        printf("Item: %s\n",p[i].item);
        printf("Quantity: %d\n",p[i].quantity);
        printf("Price: %f\n",p[i].price);
    }
    float total_price=0;
    for (int i=0;i<N;i++){
        total_price+=p[i].quantity*p[i].price;
    }
    printf("\nTotal price: %f\n",total_price);
    printf("Each person should pay: %f\n",total_price/6);
    return 0;
}