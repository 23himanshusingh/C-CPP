#include <iostream>
using namespace std;

class u{
    private:
    int a ; int b ; int c ; int d;
    public:
    void in(){
        cin>>a>>b>>c>>d;
    }
    void operator-(){
        a=-a;
        b=-b;
        c=-c;
        d=-d;
    }
    void show(){
        cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
    }
    
};

int main(){
    u ob;
    ob.in();
    -ob;
    ob.show();
    return 0;
}