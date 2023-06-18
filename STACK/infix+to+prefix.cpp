#include<iostream>
#include<stack>
#include<cstring>
#include<stdio.h>
#include<algorithm>

using namespace std;
int prec(char ch){
    if (ch=='^') 
        return 3;
    else if (ch=='*'||ch=='/') 
        return 2;
    else if (ch=='+'||ch=='-') 
        return 1;
    else 
        return -1;
}
string inTopost(string infix){
    stack <char> st;
    string res;
    for (int i=0;i<infix.length();i++){
        char c=infix[i];
        if ((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')){
            res+=c;
        }
        else if(c=='('){
            st.push(c);
        }
        else if(c==')'){
            while(st.top()!='('){
                res+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            if (c=='^'){
                while(!st.empty() && prec(c)<=prec(st.top())){
                    res+=st.top();
                    st.pop();
                }
                st.push(c);
            }
            else{
                while(!st.empty() && prec(c)<prec(st.top())){
                    res+=st.top();
                    st.pop();
                }
                st.push(c);

            }
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }

    return res;
}
string inTopre(string infix){
    /* Reverse String
     * Replace ( with ) and vice versa
     * Get Postfix
     * Reverse Postfix  *  */
    int l=infix.length();
    reverse(infix.begin(),infix.end());
    // strrev(infix);
    for (int i=0;i<l;i++){
        if (infix[i]=='('){
            infix[i]=')';
        }
        else if(infix[i]==')'){
            infix[i]='(';
        }
    }
    string prefix=inTopost(infix);
    reverse(prefix.begin(),prefix.end());
    // strrev(prefix);
    return prefix;
}
int main(){
    string infix;
    cin>>infix;
    cout<<inTopre(infix)<<endl;
    return 0;
}