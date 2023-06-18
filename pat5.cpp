#include <iostream>
using namespace std;

class phone{
private:
    int ar_code;
    int exchange;
    int number;
public:
    phone(int area_code, int exchange, int number){
        this->ar_code = area_code;
        this->exchange = exchange;
        this->number = number;
    }
    phone(){
        cin>>ar_code>>exchange>>number;
    }
    void print1(){
        cout << "(" << ar_code << ") " << exchange << "-" << number;
    }
    void print2(){
        cout << "(" << ar_code << ") " << exchange << "-" << number;
    }
};

int main(){
    phone p1(215,333,2255);
    phone p2;
    p1.print1();
    cout << endl;
    p2.print2();
    return 0;
}

