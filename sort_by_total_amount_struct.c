#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct purchase{
    int productid;
    char product[100];
    int price;
    float amount;
};
void sort_by_total(struct purchase *p,float *total,int len)
{
    int i,j;struct purchase temp1;int temp,temp2,temp3,temp4;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(total[i]<total[j])
            {   //sorting total
                temp=total[i];
                total[i]=total[j];
                total[j]=temp;
                //sorting product
                strcpy(temp1.product,p[i].product);
                strcpy(p[i].product,p[j].product);
                strcpy(p[j].product,temp1.product);
                //sorting price
                temp2=p[i].price;
                p[i].price=p[j].price;
                p[j].price=temp2;
                //sorting amount
                temp3=p[i].amount;
                p[i].amount=p[j].amount;
                p[j].amount=temp3;
                //sorting productid
                temp4=p[i].productid;
                p[i].productid=p[j].productid;
                p[j].productid=temp4;

            }

        }
    }
}
void print_purchase(struct purchase *p,float *total,int len){
    for(int i=0;i<len;i++)
    {
        printf("%d\n%s\n%d\n%.2f\n%.2f\n",p[i].productid,p[i].product,p[i].price,p[i].amount,total[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    struct purchase p[n];
    for (int i=0;i<n;i++){
        scanf("%d %s %d %f",&p[i].productid,p[i].product,&p[i].price,&p[i].amount);
    }
    float total[n];
    for (int i=0;i<n;i++){
        total[i]=(float)(p[i].price*p[i].amount);
    }
    sort_by_total(p,total,n);
    print_purchase(p,total,n);
    

    return 0;
}