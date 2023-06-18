//c++ program for parameterized constructor to find factorial of a number
#include<iostream>
using namespace std;
class factorial
{
    int num;
    public:
        factorial(int n)
        {
            num=n;
        }
    void display();// function prototype
        

};
//declaration of function display outside class
void factorial::display()
        {
            int fact=1;
            for(int i=1;i<=num;i++)
            {
                fact=fact*i;
            }
            cout<<"Factorial of "<<num<<" is "<<fact<<endl;
        }
int main()

{   int n;
    cin>>n;
    factorial f(n);
    f.display();
    return 0;
}