#include <stdio.h>
void print(int A[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}
int partition(int A[],int low,int high){
    int pivot=A[low];
    int i=low+1;
    int j=high;
    int temp;
    while (i<j){
        while (A[i]<=pivot){
            i++;
        }
        while (A[j]>pivot){
            j--;
        }
        if (i<j){
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;

}
void QuickSort(int A[],int low,int high){
    int partitionIndex;//index of partition element after partitioning
    if (low<high){
        partitionIndex=partition(A,low,high);
        printf("%d %d\n",partitionIndex,A[partitionIndex]);
        print(A,7);
        printf("\n");
        QuickSort(A,low,partitionIndex-1);//sort left subarray
        QuickSort(A,partitionIndex+1,high);//sort right subarray
    }
}
int main(){
    int n;
    scanf("%d",&n); int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    QuickSort(arr,0,n-1);
    print(arr,n);
    return 0;
}