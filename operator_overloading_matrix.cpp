#include <iostream>
#include <vector>
#define rows 50
#define cols 50
using namespace std;
 
int N;
 
class Matrix {

    int arr[rows][cols];
 
public:
    void input(vector<vector<int> >& );
    void operator+(Matrix );
    void operator-(Matrix );
    void operator++();
};
 
void Matrix::input(vector<vector<int> >& A)
{

    for (int i = 0; i < N; i++) {
 
        for (int j = 0; j < N; j++) {
 
            arr[i][j] = A[i][j];
        }
    }
}
 
void Matrix::operator+(Matrix x)
{
    int mat[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            mat[i][j] = arr[i][j]
                        + x.arr[i][j];
        }
    }
 
    for (int i = 0; i < N; i++) {
 
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
}

void Matrix::operator-(Matrix x)
{
    int mat[N][N];
    for (int i = 0; i < N; i++) {
 
        for (int j = 0; j < N; j++) {
            mat[i][j] = arr[i][j]
                        - x.arr[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
}
void Matrix::operator++()
{
    int mat[N][N];
    for (int i = 0; i < N; i++) {
 
        for (int j = 0; j < N; j++) {
            mat[i][j] = arr[i][j]++;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
}
vector <vector<int> > in(){
    vector <vector<int> > A;
    for(int i=0;i<N;i++){
        vector <int> v;
        for(int j=0;j<N;j++){
            cin>>v[j];
        }
        A.push_back(v);
    }
    return A;
}
int main(){
    int s;
    vector <vector<int> > A,B;
    cin>>s;
    cin>>N;
    switch (s){
        case 1:
            A=in();
            Matrix m;
            m.input(A);
            ++m;
            break;
        case 2:
            A=in();
            Matrix m1;
            m1.input(A);
            B=in();
            Matrix m2;
            m2.input(A);
            m1+m2;
            break;
        case 3:
            A=in();
            Matrix m3;
            m3.input(A);
            B=in();
            Matrix m4;
            m4.input(A);
            m3-m4;
            break;
    }
    return 0;
}
