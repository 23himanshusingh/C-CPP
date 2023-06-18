# include <iostream>
using namespace std;

class Solution {
    public:
        int freq(string str, char ch,int i){
            if (i == str.length()){
                return 0;
            }
            else if (str[i] == ch){
                return 1+freq(str,ch,i+1);
            }
            else{
                return freq(str,ch,i+1);
            }
        }

};
int main(){
    string str;
    cin >> str;
    char ch;
    cin >> ch;
    Solution s;
    cout << str.length() << endl;
    cout << s.freq(str,ch,0) << endl;
    return 0;
}