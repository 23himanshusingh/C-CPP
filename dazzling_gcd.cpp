#include <bits/stdc++.h>
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int a,b;
        cin<<a<<b;int c=0;
        for(int j = a; j <=b; j++){
            if (j%2==0){
                c++;
            }
        }
        if (c>=2){
            if (a%2==0){
                cout<<a<<" "<<a+2<<endl;
            }
            else if (a%3==0){
                cout<<a<<" "<<a+3<<endl;
            }
            else{
                cout<<a+1<<" "<<a+3<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }


    }
}
