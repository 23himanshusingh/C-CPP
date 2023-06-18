#include <iostream>

#include <vector>

#include <algorithm>

#include <limits.h>


using namespace std;


int main(){

    int n;

    cin>>n;

    vector <int> price;
    int x;
    for (int i=0;i<n;i++){

        cin>>x;

        price.push_back(x);

    }

	
    vector <vector<int>>dp(n,vector<int>(n+1,0));

    for (int N=0;N<=n;N++){

        dp[0][N]=N*price[0];

    }

    for (int ind=1;ind<n;ind++){

        for (int N=0;N<=n;N++){

            int notTake=dp[ind-1][N];

        int take=INT_MIN;

        int rodlength=ind+1;

        if (rodlength<=N){

            take=price[ind]+dp[ind][N-rodlength];

        }

        dp[ind][N]=max(take,notTake);

        }

    }

    cout<<dp[n-1][n];

    return 0;

}



