#include<iostream>
using namespace std;

class A{
    public:
    void m1(){
        cout<<"m1 from class A"<<endl;
    }
};
class B : public A{
    public:
    void m2(){
        cout<<"m2 from class B"<<endl;
    }
    
};
class C : public A{
    public:
    void m3(){
        cout<<"m3 from class C"<<endl;
    }
    
};
class D : public B{
    public:
    void m4(){
        cout<<"m4 from class D"<<endl;
    }
};


class E : public C{
    public:
    void m5(){
        cout<<"m5 from class E"<<endl;
    }
};

 


int main(){
    D ob1;
    ob1.m1();
    ob1.m2();
    ob1.m4();
    E ob2;
    ob2.m1();
    ob2.m3();
    ob2.m5();
    return 0;
}