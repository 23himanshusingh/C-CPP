#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct fruits
{
    char fruit[20];
    int price;
    int quantity;
};
void sort_by_price(struct fruits *arr,int *total,int len)
{
    int i,j;struct fruits temp1;int temp,temp2,temp3;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(total[i]<total[j])
            {
                temp=total[i];
                total[i]=total[j];
                total[j]=temp;
                strcpy(temp1.fruit,arr[i].fruit);
                strcpy(arr[i].fruit,arr[j].fruit);
                strcpy(arr[j].fruit,temp1.fruit);
                temp2=arr[i].price;
                arr[i].price=arr[j].price;
                arr[j].price=temp2;
                temp3=arr[i].quantity;
                arr[i].quantity=arr[j].quantity;
                arr[j].quantity=temp3;
            }

        }
    }
}
void print_fruits(struct fruits *arr,int *total,int len){
    for(int i=0;i<len;i++)
    {
        printf("%s %d %d\n",arr[i].fruit,arr[i].price,arr[i].quantity);
    }
}
int main()
{
    struct fruits f[4];int total[3];
    for(int i=0;i<3;i++)
    {
        scanf("%s %d %d",f[i].fruit,&f[i].price,&f[i].quantity);
    }
    for (int i=0;i<3;i++)
    {
        total[i]=f[i].price*f[i].quantity;
    }
    sort_by_price(f,total,3);
    print_fruits(f,total,3);
    return 0;
}
