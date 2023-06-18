# include <stdio.h>
# include <stdlib.h>
int main(){
    int *ptr=(int*)malloc(sizeof(int)*20);
    printf("%d\n",sizeof(ptr));
    return 0;
}

