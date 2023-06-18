#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
}*first;

void create(int a[],int n){
    struct Node *last , *t;
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
void display(struct Node *p){
    while (p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
int count(struct Node*p){
    int l=0;
    while(p){
        l++;
        p=p->next;
    }
    return l;
}
void Insert(struct Node*p,int ind , int x){
    struct Node*t;
    if (ind<0 || ind>count(p)){
        return ;
    }
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    if (ind==0){
        t->next=first;
        first=t;
    }
    else{
        for (int i=0;i<(ind-1);i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
    
}
int main(){
    int a[]={2,4,6};
    create(a,3);
    Insert(first,4,0);
    display(first);
}