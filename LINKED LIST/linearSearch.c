#include <stdio.h>
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
struct Node *Lsearch(struct Node *p,int key){
    while(p){
        if (p->data==key){
            return p;
        }
    }
    return NULL;
}
struct Node *RecLsearch(struct Node *p,int key){
    if (p==0){
        return NULL;
    }
    else if(p->data==key){
        return p;
    }
    else{
        return RecLsearch(p->next,key);
    }
}
//IMPROVING LINEAR SEARCH
struct Node* MoveKeyToFisrtNode(struct Node *p,int key){
    struct Node* q=NULL;
    while (p!=NULL){
        if (key==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}
void display(struct Node *p){
    while (p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

int main(){
    int a[]={3,5,7,10,-1,0,13,20,-7,10};
    create(a,10);
    struct Node* temp;
    // temp=RecLsearch(first,0);
    temp=MoveKeyToFisrtNode(first,10);
    if (temp){
        printf("KEY FOUND");
    }
    else{
        printf("KEY NOT FOUND");
    }
    display(first);
    return 0;
}