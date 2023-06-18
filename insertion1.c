#include<stdio.h>
#include<stdbool.h>
int main(){
    int n; scanf ("%d",&n);
    float brr[n],arr[n];
    for (int i=0;i<n;i++){
        scanf("%f",&brr[i]);
        arr[i]=brr[i];
    }
    
    int i , j ; float key;
    for (i=1;i<n;i++){
        key=brr[i];
        j=i-1;
        while (j>=0 && arr[j]>key){
            brr[j+1]=brr[j];
            j=j-1;
        }
        brr[j+1]=key;
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (brr[i]==arr[j]){
                printf("%d ",j);
            }
        }
    }

    return 0;
}