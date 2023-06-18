#include <iostream>
using namespace std;

class your ;
class My{
    private:
    int a=10;
    friend your;
    
};
class your {
    public:
    My m
    void fun(){
        cout<<m.a;
    }
};