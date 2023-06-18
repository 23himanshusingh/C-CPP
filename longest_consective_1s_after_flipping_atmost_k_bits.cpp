// Given a binary array a[] and a number k, we need to find length of the longest subsegment of ‘1’s possible by changing at most k ‘0’s. 
// Examples: 
 

// Input : a[] = {1, 0, 0, 1, 1, 0, 1}, 
//           k = 1.
// Output : 4
// Explanation : Here, we should only change 1
// zero(0). Maximum possible length we can get
// is by changing the 3rd zero in the array, 
// we get a[] = {1, 0, 0, 1, 1, 1, 1}

// Input : a[] = {1, 0, 0, 1, 0, 1, 0, 1, 0, 1}, 
//          k = 2.
// Output : 5
// Output: Here, we can change only 2 zeros. 
// Maximum possible length we can get is by 
// changing the 3rd and 4th (or) 4th and 5th 
// zeros.
#include <bits/stdc++.h>
using namespace std;

int fun(vector <int> &arr,int k){
    int start=0,end=0,maxi=0,fs=0,fe=0,zero_cnt=0;
    while (end<=arr.size()-1){
        if (arr[end]==0){
            zero_cnt+=1;
        }

        if (zero_cnt>k){
            if (arr[start]==0){
                zero_cnt--;
            }
            start++;
        }

        if (maxi<end-start+1){
            maxi=end-start+1;
            fs=start;
            fe=end;
        }
        end++;

    }
    for (int i=fs;i<=fe;i++){
        cout<<arr[i];
    }
    cout<<endl;
    return maxi;
}
int main(){
    vector <int> arr={1, 0, 0, 1, 0, 1, 0, 1, 0, 1};
    int k=2;
    cout<<fun(arr,k);
}