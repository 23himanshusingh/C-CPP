#include<stdio.h>

void Merge(int A[],int low,int mid,int high){
    int i,j,k,B[10000];
    i=low;
    j=mid+1;
    k=low;
    while (i<=mid && j<=high){
        if (A[i]<A[j]){
            B[k]=A[i];
            i++;
            k++;
        }
        else{
            B[k]=A[j];
            j++;
            k++;
        }

    }
    while (i<=mid){
        B[k]=A[i];
        k++;
        i++;
    }
    while (j<=high){
        B[k]=A[j];
        k++;
        j++;
    }
    for (int i=low;i<=high;i++){
        A[i]=B[i];
    }
}
void print(int A[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}
void MergeSort(int A[],int low,int high){
    int mid;
    if (low<high){
        mid=(low+high)/2;
        MergeSort(A,low,mid);
        MergeSort(A,mid+1,high);
        Merge(A,low,mid,high);
    }
}
int main(){
    int n;
    scanf("%d",&n); int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    MergeSort(arr,0,n-1);
    print(arr,n);
}