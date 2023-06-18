#include <stdio.h>
#include <stdbool.h>
int main(){
    int n; scanf("%d",&n);
    int arr[n];
    bool check[10000];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        check[arr[i]]=false;
    }
    int b=-1;int unique[10000];
    for(int i = 0; i < n; i++){
        if(check[arr[i]] == false){
            b++;
            unique[b] = arr[i];
            check[arr[i]]= true;
        }
    }
    for (int i=0;i<=b;i++){
        int count=0;
        for(int j=0;j<n;j++ ){
            if (arr[j]==unique[i]){
                count++;
            }
        }
        if (count>=2){
            printf("%d ",unique[i]);
        }
    }

    return 0;
}