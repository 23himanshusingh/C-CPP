/*The idea is simple, traverse both strings from one side to another side (say from rightmost character to leftmost). 
If we find a matching character, move ahead in both strings. Otherwise, move ahead only in str2. */
#include <iostream>
#include <cstring>
using namespace std;
bool isSubsequence(string child,string parent,int c,int p){
    if (c==0)
        return 1;
    if (p==0)
        return 0;
    if(child[c-1]==parent[p-1])
        return isSubsequence(child,parent,c-1,p-1);
    return isSubsequence(child,parent,c,p-1);
}
int main(){
    string child, parent;
    cin>>child>>parent;
    isSubsequence(child,parent,child.length(),parent.length())?cout<<"YES":cout<<"NO";
    return 0;
}