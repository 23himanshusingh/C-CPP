/*#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,rem;
    cin >> n;
    int rev = 0;
    while (n>0){
        rem=n%10;
        rev =(rev*10) + rem;
        n=n/10;
    }
    cout << rev << endl;
 } */

#include <iostream>
using namespace std;

class Solution {


    public:
        int reverse(int x) {
            int rev = 0;
            while (x>0){
                int rem = x%10;
                rev = (rev*10) + rem;
                x=x/10;
            }
            return rev;
        }
    };

int main(){
    int n;
    cin >> n;
    Solution s;
    cout << s.reverse2(n) << endl;
}
