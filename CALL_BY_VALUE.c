#include<stdio.h>
void swap(int x,int y){
    x=20;y=10;
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("BEFORE SWAPPING\n");
    printf("x=%d,y=%d\n",x,y);
    swap(x,y);
    printf("AFTER SWAPPING\n");
    printf("x=%d,y=%d",x,y);
    return 0;
}
