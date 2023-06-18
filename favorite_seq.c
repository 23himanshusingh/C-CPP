#include<stdio.h>
#include<stdbool.h>

int main(){
    int t,n,f;
    scanf("%d",&t);
    for(int k=0;k<t;k++){   
        scanf("%d",&n);
        int n1[1000];
        for(int i=0;i<n;i++){
            scanf("%d",&n1[i]);
        }
        scanf("%d",&f);
        int f1[1000];
        for(int i=0;i<f;i++){
            scanf("%d",&f1[i]);
        }
        int i = 0, j = 0, c = 0;
 
        while (i < n && j < f) {

            if (n1[i] == f1[j]) {
 
                i++;
                j++;

                if (j == f){
                    c++;
                    printf("Y\n");
                }
            }
            else {
                i = i - j + 1;
                j = 0;
            }
        }
        if (c==0){
            printf("N\n");
        }
    }

 

    return 0;




    
}