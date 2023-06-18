// Given a sequence of n numbers (real or integers) and a number
// k (k is one among the n numbers ), write an algorithm and the
// corresponding code to compute the position of k if the given n
// numbers are arranged in an increasing order, using insertion sort. If the 2, −1, 3, 0, 7 and 3 are the input , your program
// should output 4 since 3 will be in the fourth position (starting
// from 1), in the sorted (increasing ) order. You are expected
// to code the problem two different ways, say, c1 , c2 using
// two different approaches. Decide whether c1 is efficient or c2
// is efficient based on the running time T(n) of the resepctive
// codes.


#include <iostream>
using namespace std;

void insertionSort(int arr[],int n){
    int key,j;
    for (int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int linearSearch(int arr[],int n,int k){
    for (int i=0;i<n;i++){
        if (arr[i]==k){
            return i+1;
            break;
        }
    }
    return -1;
}
int binarySearch(int arr[],int n,int k){
    int hi=n-1,lo=0,mid;
    while (hi>lo){
        mid=(hi+lo)/2;
        if (arr[mid]>k){
            hi=mid-1;
        }
        else if (arr[mid]<k){
            lo=mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    insertionSort(arr,n);
    cout<<linearSearch(arr,n,k)<<endl;
    cout<<binarySearch(arr,n,k);
}
