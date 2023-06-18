/* first approach using prefix sum array */
const int n=1e6 + 10;
int b[n];
long pf[n];
class Solution{

public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        for (int i=0;i<N;i++){
            b[i+1]=Arr[i];
        }
        for (int i=1;i<=N;i++){
            pf[i]=pf[i-1]+b[i];
        }
        long  m=-1,s=0;
        
        for (int l=1;l<=N+1-K;l++){
            s=pf[l+K-1]-pf[l-1];
            if (s>m){
                m=s;
            }
        }
        return m;
    }
};
/*2nd approach using sliding window*/

long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long sum=0;
        long maxi=LONG_MIN;
        int i=0,j=0;
        while (j<N){
            sum+=Arr[j];
            if ((j-i+1) != K ){
                j++;
            }
            else{
                if (sum>maxi){
                    maxi=sum;
                }
                sum=sum-Arr[i];
                i++;
                j++;
            }
        }
        return maxi;
    }
};