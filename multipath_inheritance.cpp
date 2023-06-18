#include <iostream>
using namespace std;
class person{
    public:
    string name;
    int code ;
    void input(){
        
        cin>>name;

        cin>>code;
    }
    void display(){
        cout<<endl<<"Name of the person: "<<name;
        cout<<endl<<"Code of the person: "<<code;
    }
};
class account : virtual public person
{
    public:
    float pay;
    void getpay ()
    {
        cin>>pay;
    }
    void display() {
        cout<<endl<<"Pay: "<<pay;
    }
};
class admin : virtual public person
{
    public:
    int experience;
    void getexp(){
        
        cin>>experience;
    }
    void display(){
        cout<<endl<<"Experience: "<<experience;
    }
};
class master : public account , public admin
{
    public:
    string n;
    void gettotal(){
        
        cin>>n;
    }
    void display(){
        cout<<endl<<"Company name: "<<n;
    }

};

int main(){
    master m1;
    m1.input();
    m1.getpay();
    m1.getexp();
    m1.gettotal();
    m1.person::display();
    m1.account::display();
    m1.admin::display();
    m1.display();
    return 0;
}



 