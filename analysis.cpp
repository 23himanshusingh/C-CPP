#include <iostream>
#include <ctime>
using namespace std;
void insertionSort(int arr[],int n){
 int key,j;
for (int i=1;i<n;i++){
 key=arr[i];
j=i-1;
while(j>=0 && arr[j]>key){
    arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
}
int main() {
clock_t start, end;
int n;
cin>>n; int arr[n];
for (int i=0;i<n;i++){
cin>>arr[i];
 }
 start=clock();

 insertionSort(arr,n);

end=clock();

 double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
 cout << "Time taken by program is : " << fixed << time_taken ;
cout << " sec " << endl;
for (int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
 return 0;
}