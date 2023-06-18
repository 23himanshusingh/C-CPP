#include <iostream>
#include <stack>
#include <cstring>
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
            while(!st.empty() && prec(c)<=prec(st.top())){
                res+=st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }

    return res;
}
int main(){
    string infix;
    cin>>infix;
    cout<<inTopost(infix)<<endl;
    return 0;
}
// #include <iostream>
// #include<cstring>
// #include <stack>

// using namespace std;
 
// int isOperand(char x){
//     if (x == '+' || x == '-' || x == '*' || x == '/' ||
//         x == '^' || x == '(' || x == ')'){
//         return 0;
//     }
//     return 1;
// }
 
// int outPrecedence(char x){
//     if (x == '+' || x == '-'){
//         return 1;
//     } else if (x == '*' || x == '/'){
//         return 3;
//     } else if (x == '^'){
//         return 6;
//     } else if (x == '('){
//         return 7;
//     } else if (x == ')'){
//         return 0;
//     }
//     return -1;
// }
 
// int inPrecedence(char x){
//     if (x == '+' || x == '-'){
//         return 2;
//     } else if (x == '*' || x == '/'){
//         return 4;
//     } else if (x == '^'){
//         return 5;
//     } else if (x == '('){
//         return 0;
//     }
//     return -1;
// }
 
// char* convert(char* infix){
//     char* postfix = new char [strlen(infix) + 1];
 
//     stack<char> stk;
 
//     int i = 0;
//     int j = 0;
 
//     while (infix[i] != '\0'){
//         if (isOperand(infix[i])){
//             postfix[j++] = infix[i++];
//         } else {
//             if (stk.empty() || outPrecedence(infix[i]) > inPrecedence(stk.top())){
//                 stk.push(infix[i++]);
//             } else if (outPrecedence(infix[i]) == inPrecedence(stk.top())){
//                 stk.pop();
//             }
//             else {
//                 postfix[j++] = stk.top();
//                 stk.pop();
//             }
//         }
//     }
 
//     while (! stk.empty() && stk.top() != ')'){
//         postfix[j++] = stk.top();
//         stk.pop();
//     }
 
//     postfix[j] = '\0';
 
//     return postfix;
 
// }
 
 
// int main() {
 
//     char infix[] = "((a+b)*c)-d^e^f";
 
//     cout << convert(infix) << endl;
 
// }

