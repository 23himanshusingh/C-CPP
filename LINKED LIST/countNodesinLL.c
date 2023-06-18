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
int count(struct Node*p){
    if (p==NULL){
        return 0;
    }
    else{
        return count(p->next)+1;
    }
}
int main(){
    int a[]={3,5,7,10,15};
    create(a,5);
    printf("%d",count(first));
    return 0;
}