bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> s;
    for(int i=0;i<expression.length();i++){
        if(expression[i]=='['||expression[i]=='('||expression[i]=='{'){
            s.push(expression[i]);
        }
        else{
            if(!s.empty()){
            if(expression[i]==']'&&s.top()=='[')
                s.pop();
           else if(expression[i]==')'&&s.top()=='(')
                s.pop();
           else if(expression[i]=='}'&&s.top()=='{')
                s.pop();
            else
                return false;
            }
            else
                return false;
        }
    }
    if(s.empty())
        return true;
    else
        return false;
}
