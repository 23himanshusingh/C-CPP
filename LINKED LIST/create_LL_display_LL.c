#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node * next;
}*first = NULL;

void create(int a[],int n){
    int i;
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=a[0];
    first->next=NULL;
    last=first;

    for (i=1;i<n;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
//display linked list 
void display(struct Node *p){
    while (p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
//display linked list recursively
void Rdisplay(struct Node*p){
    if (p!=NULL){
        printf("%d ",p->data);
        Rdisplay(p->next);
    }
}//display linked list in reverse order recursively
void Rdisplay_reverse(struct Node*p){
    if (p!=NULL){
        
        Rdisplay_reverse(p->next);
        printf("%d ",p->data);
    }
}

int main(){
    int a[]={3,5,7,10,15};
    create(a,5);
    display(first); 
    printf("\n");
    Rdisplay(first); 
    printf("\n");
    Rdisplay_reverse(first);
    return 0;
}