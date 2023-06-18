#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first;
void create(int a[],int n){
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=a[0];
    first->next=NULL;
    last=first;

    for (int i=1;i<n;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
//iterative
int Add(struct Node*p){
    int sum=0;
    while(p){
        sum=sum+(p->data);
        p=p->next;
    }
    return sum;
}
//recursive
int Add_rec(struct Node*p){
    if (p==0){
        return 0;
    }
    else{
        return Add_rec(p->next)+(p->data);
    }
}
int main(){
    int a[]={3,5,7,10,15};
    create(a,5);
    printf("%d\n",Add(first));
    printf("%d",Add_rec(first));
    return 0;
}