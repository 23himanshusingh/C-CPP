#include<stdio.h>
#include<stdbool.h>
void count_odd_mostfreq(int arr[],int n){
    bool check[10000];int b[10000];
    
    for(int i=0;i<n;i++){
        check[arr[i]]=false;
    }
    int x=-1;
    for(int i=0;i<n;i++){
        if(check[arr[i]]==false){
            x++;b[x]=arr[i];
            check[arr[i]]=true;
        }
    }
    int freq[10000];
    for(int i=0;i<=x;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(b[i]==arr[j]){
               count++; 
            }
        }
        freq[i]=count;
    }
    
}





int main(){
    int n;scanf("%d",&n);int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    count_odd_mostfreq(arr,n);
    return 0;
}