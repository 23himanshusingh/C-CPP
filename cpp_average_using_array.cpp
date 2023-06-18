#include <iostream>
using namespace std;

class Solution {
    private:
        int avg;
        int sum=0;
    public:
        int average(int *arr, int n) {
            for (int i=0; i<n; i++){
                sum += *(arr+i);
            }
            avg = sum/n;
            return avg;
        }
};
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    Solution s;
    cout << s.average(arr, n) << endl;
}