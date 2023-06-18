# include <iostream>
# include <valarray>
using namespace std;
class employee
{   public:
    int id;
    string name;
    float salary;


void sort_by_salary(employee e[],int n)
{
    for (int i=0;i<name.size();i++)
    {
        for (int j=i+1;j<name.size();j++)
        {
            if (e.salary[i]>salary[j])
            {
                swap(e.salary[i],salary[j]);
                swap(e.name[i],name[j]);
                swap(e.id[i],id[j]);
            }

        }
    }
}
};
        
    
        

int main()
{
    int n;
    cin>>n;
    employee e[n];
    for (int i=0;i<n;i++)
    {
        cin>>e[i].id>>e[i].name>>e[i].salary;

    }
    employee e1;
    e1.sort_by_salary(e,n);
    for (int i=0;i<n;i++)
    {
        cout<<e[i].id<<" "<<e[i].name<<" "<<e[i].salary<<endl;
    }
    return 0;
}

