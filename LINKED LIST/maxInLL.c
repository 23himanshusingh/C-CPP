#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
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
int max(struct Node*p){
    int m=INT_MIN;
    while(p!=0){
        if (p->data > m){
            m=p->data;
        }
        p=p->next;
    }
    return m;
}
//recursive
int maxRec(struct Node*p){
    int x=0;
    if (p==0){
        return INT_MIN;
    }
    else{
        x=maxRec(p->next);
        if (x>p->data){
            return x;
        }
        else{
            return p->data;
        }
    }
}
int main(){
    int a[]={3,5,7,10,-1,0,13,20,-7,10};
    create(a,10);
    printf("%d\n",max(first));
    printf("%d",maxRec(first));
    return 0;
}