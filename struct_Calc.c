#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Calc{
    int arr[100];
    int len;
    int n;
};
void rec(int sum,int i,int *arr,int len,int n){
    if (i==len){
        return ;
    }
    sum=sum+arr[i];
    if (sum<=n){
        printf("%d ",arr[i]);
        rec(sum,i+1,arr,len,n);
    }
    else{
        printf("\n");
        rec(0,i,arr,len,n);
    }


}
void func(){
    struct Calc c;
    scanf("%d",&c.len);
    for (int i=0;i<c.len;i++){
        scanf("%d",&c.arr[i]);
    }
    scanf("%d",&c.n);
    rec(0,0,c.arr,c.len,c.n);
}
    

int main(){
    func();
    return 0;
}