// Given a sequence of n numbers (real or integers), write an
// algorithm and the corresponding code to arrange the given
// n numbers are arranged in such a way that all the negative
// numbers (if any) are arranged in a descending order and all
// the positive numbers are arranged in an increasing order with
// zero (if it is in the input) appearing between the smallest negative number and the smallest positive number. 
// If 7, 3, 2, 4 the output should be 2, 3, 4, 7. If −7, −3, 2, 4 the output should be
// −3, −7, 2, 4 should be the output. If 7, 3, −1, 0, 2, 4 the output
// should be −1, 0, 3, 4, 7

#include <iostream>
using namespace std;

void insertion(int arr[],int n){
    for (int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>=0 && key>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        while (j>=0 && ((arr[j]>=0 && key<0) || (arr[j]<0 && key>=0)) && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        while (j>=0 && arr[j]<0 && key<0 && arr[j]<key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}