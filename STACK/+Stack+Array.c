//STACK USING ARRAY
#include <stdio.h>
#include <stdlib.h>
struct stack{
    int top;
    int size;
    int *s; // array can be of any data type
};
void create(struct stack*st){
    printf("Enter size of stack\n");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int*)malloc(sizeof(int)*st->size);
}
void display(struct stack st){
    for (int i=st.top;i>=0;i--){
        printf("%d ",st.s[i]);
    }
    printf("\n");
}
void push(struct stack*st,int x){
    if (st->top==st->size-1){
        printf("Stack Overflow\n");
    }
    else{
        st->top++;
        st->s[st->top]=x;
    }
}
int pop(struct stack*st){
    int x=-1;//char x='\0' char *x=""
    if (st->top==-1){
        printf("Stack Underflow\n");
    }
    x=st->s[st->top--];
    return x;
}
int peek(struct stack st,int pos){
    int x=-1; int index=st.top-pos+1;
    if (index<0){
        printf("Invalid index");
    }
    x=st.s[index];
    return x;
}
int empty(struct stack st){
    if (st.top==-1){
        return 1;
    }
    return 0;
}
int isFull(struct stack st){
    if (st.top==st.size-1){
        return 1;
    }
    return 0;
}
int top(struct stack st){
    if (!(isEmpty(st)))
        return st.s[st.top];
    return -1;
}


int main(){
    struct stack st; int ele;
    create(&st);
    for (int i=0;i<st.size;i++){
        scanf("%d",&ele);
        push(&st,ele);
    }
    display(st);
    int x=pop(&st);
    printf("popped element %d\n",x);
    display(st);
    int pos; scanf("%d",&pos);
    printf("peeked for element %d\n",peek(st,pos));
}