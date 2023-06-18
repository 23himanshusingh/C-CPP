vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
                                                 vector <long long > ans;
                                                 long long i=0,j=0;
                                                 vector <long long> neg;
                                                 while (j<N){
                                                     if (A[j]<0){
                                                         neg.push_back(A[j]);
                                                     }
                                                     if (j-i+1 != K){
                                                         j++;
                                                     }
                                                     else{
                                                         if (neg.size()!=0){
                                                             ans.push_back(neg[0]);
                                                             if (A[i]==neg[0]){
                                                                neg.erase(neg.begin());
                                                             }
                                                             
                                                         }
                                                         else{
                                                             ans.push_back(0);
                                                         }
                                                         i++;
                                                         j++;
                                                     }
                                                 }
                                                 return ans;
                                                 
 };