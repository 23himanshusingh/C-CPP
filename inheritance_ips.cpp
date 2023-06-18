#include<iostream>
using namespace std;
class Stud{
    public:
    int studid;
    string sname;
    Stud(int id,string name){
      studid=id;
      sname=name;
    }
};
class StudExam:public Stud{
    public:
    int n;
    int* marks;
    StudExam(int id,string name,int num):Stud(id,name){
        n=num;
        marks = (int*)calloc(n,sizeof(int));
        for (int i=0 ; i<n; i++){
            cin>>marks[i];
        }
        
    }
    
};
class StudResult:public StudExam{
    public:
    int sum=0;
    StudResult(int id,string name,int num): StudExam(id,name,num)
    {
        for(int i=0;i<n;i++){
            sum +=marks[i];
        }
        int p=(sum/n);
        cout<<p<<endl;
        if (p>90){
            cout<<'S';
        }
        else if (p<=90 && p>80){
            cout<<'A';
        }
        else if (p<=80 && p>70){
            cout<<'B';
        }
        else if (p<=70 && p>60){
            cout<<'c';
        }
        else if (p<=60 && p>50){
            cout<<'D';
        }
        else{
            cout<<'F';
        }
        
        
    }
};

int main(){
    int id;
    cin>>id;
    string name;
    cin>>name;
    int num;
    cin>>num;
    StudResult ob(id,name,num);
    return 0;
    
}