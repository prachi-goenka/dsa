#include<stack>
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char>ch;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='*'||s[i]=='/'||s[i]=='-'||s[i]=='+'){
            ch.push(s[i]);
        }
        if(s[i]==')'){
            if(ch.top()=='(')
                return true;
            else{
                while(ch.top()!='('){
                    ch.pop();
                }
                ch.pop();
            }
        }
    }
    return false;
}
