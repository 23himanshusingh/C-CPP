/*A B C D E F G
  A B C   E F G
  A B       F G
  A           G*/
```#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char *str=(char *)malloc(sizeof(char)*1000);
    scanf("%[^\n]s",str);
    realloc(str,sizeof(char)*strlen(str)+1);
    int i;int l=strlen(str);
    for (i = 0; i < l; i++){
        printf("%c ",str[i]);
    }
    int r=(l-1)/2;int p1,p2;
    printf("\n");
    if (l%2==0){
        p1=l/2;p2=(l/2)-1;

        for (i = 0; i < r; i++){
            str[p1]=' ';str[p2]=' ';
            p1++;p2--;
            for(int j=0;j<l;j++){
                printf("%c ",str[j]);
            }
            printf("\n");
        }
    }
    else{
        int p=l/2;
        int p1=p-1;int p2=p+1;
        for (i = 0; i < r; i++){
            if (i==0){
                str[p]=' ';
            }
            else{
                str[p1]=' ';str[p2]=' ';
                p1--;p2++;
            }
            for(int j=0;j<l;j++){
                printf("%c ",str[j]);
            }
            printf("\n");
        }
    }

    return 0;

}```

