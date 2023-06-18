#include <iostream>
using namespace std;
class showroom{
    public:
    string product; int id;int qty;
    
    friend void least(showroom *ob,int n);
};
void least(showroom *ob,int n){
    showroom temp;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (ob[i].qty>ob[j].qty){
                temp.product=ob[j].product;
                ob[j].product=ob[i].product;
                ob[i].product=temp.product;

            }
        }
    }
    cout<<ob[0].product;

}

int main(){
    int n;
    cin>>n;
    showroom ob[n];
    for (int i=0;i<n;i++){
        cin>>ob[i].product;
        cin>>ob[i].id;
        cin>>ob[i].qty;


    }
    least(ob,n);
    
    

}