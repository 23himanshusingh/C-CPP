#include<iostream>
using namespace std;
int main(){
    int x= 2; int &y=x ; x++;y++; cout<<y<<endl;
    cout << "x = " << x << endl;
    return 0;
}