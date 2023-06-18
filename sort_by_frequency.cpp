// Sort elements by frequency using hashing and sorting:

#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool fcompare(pair<int,pair<int,int>> p,pair<int,pair<int,int>> p1){
    if (p.second.second!=p1.second.second){
        return (p.second.second>p1.second.second);
    }
    else{
        return (p.second.first<p1.second.first);
    }
}
void sortByFrequency(int arr[],int n){
    unordered_map <int , pair<int,int>> hash;
    // key --> element
    // value --> pair of index and count of element
    for (int i=0;i<n;i++){
        if (hash.find(arr[i]) != hash.end()){
            hash[arr[i]].second++;
        }
        else{
            hash[arr[i]]={i,1};
        }
    }
    vector <pair<int,pair<int,int>>> b;
    for (auto it=hash.begin();it!=hash.end();it++){
        b.push_back({it->first,it->second});
    }
    sort(b.begin(),b.end(),fcompare);
    for (int i=0;i<b.size();i++){
        // cout<<b[i].first<<" "<<b[i].second.first<<" "<<b[i].second.second<<endl;
        int cnt=b[i].second.second;
        while (cnt--){
            cout<<b[i].first<<" ";
        }
    }
}

int main()
{
    int arr[] = { 2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    sortByFrequency(arr, n);
 
    return 0;
}