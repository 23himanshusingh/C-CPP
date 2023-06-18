#include <iostream>
using namespace std;
class Solution {
    private :
    float m1,c1,m2,c2;
    public:
    void set(int M1,int C1,int M2,int C2)
    {
        m1=M1;
        c1=C1;
        m2=M2;
        c2=C2;
    }
    void get_intercept()
    
    {   
        float x=(c2-c1)/(m1-m2);
        float y=m1*x+c1;
        cout<<x<<","<<y<<endl;



    }

};
int main()
{   int m1,c1,m2,c2;
    Solution s;
    cin>>m1>>c1>>m2>>c2;
    s.set(m1,c1,m2,c2);
    s.get_intercept();
    return 0;
}