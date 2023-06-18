#include <iostream>

using namespace std;

class Complex_num
{
    private :
        int a;
        int b;
    public :
        Complex_num() 
        {
            
        }

        //removed default parameters here to avoid ambiguity between constructors
        Complex_num(int x, int y) 
        {
            a=x; b=y;
        }
        friend Complex_num operator+(Complex_num, Complex_num);
        friend Complex_num operator-(Complex_num, Complex_num);
        Complex_num operator*(Complex_num);
        Complex_num operator/(Complex_num);
        
        void show();
};

//added another argument in the friend function operator overloading
Complex_num operator+(Complex_num c1, Complex_num c2)
{
    Complex_num t;
    t.a=c1.a+c2.a;
    t.b=c1.b+c2.b;
    return t;
}
Complex_num operator-(Complex_num c1, Complex_num c2)
{
    Complex_num t;
    t.a=c1.a-c2.a;
    t.b=c1.b-c2.b;
    return t;
}
Complex_num Complex_num::operator*(Complex_num c)
{
    Complex_num t;
    t.a=a*c.a;
    t.b=b*c.b;
    return t;
}
Complex_num Complex_num::operator/(Complex_num c)
{
    Complex_num t;
    t.a=a/c.a;
    t.b=b/c.b;
    return t;
}
void Complex_num::show()
{
    cout<<a<<"\t"<<b<<endl;
}

int main()
{
    Complex_num a1(3,4),b1(4,5),c1;
    c1=a1+b1;
    c1.show();
    c1=a1-b1;
    c1.show();
    c1=a1*b1;
    c1.show();
    c1=a1/b1;
    c1.show();
    return 0;
}
