#include <iostream>

#include <vector>

#include <algorithm>

#include <limits.h>

#include <math.h>

using namespace std;

 
int f(int ind,int N,vector<int> &price,vector<vector<int>> &dp){

    if (ind==0){

        return N*price[0];

    }

    if (dp[ind][N]!=-1){

        return dp[ind][N];

    }

    int notTake=0+f(ind-1,N,price,dp);

    int rodlength=ind+1;

    int take=INT_MIN;

    if(rodlength<=N){

        take=price[ind]+f(ind,N-rodlength,price,dp);

    }

    return dp[ind][N]=max(take,notTake);

}




int cutRod(vector<int> &price, int n)

{


    vector<vector<int>> dp(n,vector<int>(n+1,-1));

    return f(n-1,n,price,dp);

}

int main(){

    int n;

    cin>>n;

    vector <int> price;
    int x;
    for (int i=0;i<n;i++){

        cin>>x;

        price.push_back(x);

    }

    cout<<cutRod(price,n);

    return 0;
}



//     vector <vector<int>>dp(n,vector<int>(n+1,0));

//     for (int N=0;N<=n;N++){

//         dp[0][N]=N*price[0];

//     }

//     for (int ind=1;ind<n;ind++){

//         for (int N=0;N<=n;N++){

//             int notTake=dp[ind-1][N];

//         int take=INT_MIN;

//         int rodlength=ind+1;

//         if (rodlength<=N){

//             take=price[ind]+dp[ind][N-rodlength];

//         }

//         dp[ind][N]=max(take,notTake);

//         }

//     }

//     cout<<dp[n-1][n];

//     return 0;

// }