#include <bits/stdc++.h>
using namespace std;

vector<int> MSS(vector <int> arr,int l,int r){
    if (l==r){
        vector <int> ans={arr[l],l,r};
        return ans;
    }
    int mid=(l+r)/2;
    vector<int> LSS=MSS(arr,l,mid);
    vector<int> RSS=MSS(arr,mid+1,r);
    vector<int> CSS={0,0,0};
    int ls=INT_MIN,rs=INT_MIN,sum=0;
    for (int i=mid;i>=0;i--){
        sum+=arr[i];
        if (sum>ls){
            ls=sum;
            CSS[1]=i;
        }
    }
    sum=0;
    for (int i=mid+1;i<=r;i++){
        sum+=arr[i];
        if (sum>rs){
            rs=sum;
            CSS[2]=i;
        }
    }
    CSS[0]=ls+rs;
    if (LSS[0]>RSS[0] && LSS[0]>CSS[0] ){
        return LSS;
    }
    else if (LSS[0]<RSS[0] && RSS[0]>CSS[0] ){
        return RSS;
    }
    else{
        return CSS;
    }

}

int main(){
    vector <int> arr={-2,-5,6,-2,-3,1,5,-6};
    int s=0,e=0;
    vector <int> ans=MSS(arr,0,arr.size()-1);
    cout<<ans[0]<<endl;
    for (int i=ans[1];i<=ans[2];i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}