bool isOperator(char c)
{
    if(c == '+' || c == '-' || c == '*' || c == '/') return true;

    return false;
}
int eval(int f , char op , int s)
{
    if(op == '+') return f+s;
    else if(op == '-') return f-s;
    else if(op == '*') return f*s;
    else return f/s;
}
int Solution::evalRPN(vector<string> &A)
{
    if(A.size() == 1)
    {
        if(isOperator(A[0][0]) && A[0].length() == 1)
        {

        }
        else
        {
            return stoi(A[0]);
        }
    }

    stack<int> s;
    int result = 0;
    for(int i = 0 ; i < A.size() ; i++)
    {

        if(isOperator(A[i][0]) && A[i].length() == 1)
        {
            int first = 0 , second = 0;
            if(!s.empty())
            {
                second = s.top();
                s.pop();
            }
            if(!s.empty())
            {
                 first = s.top();
                 s.pop();
            }
            result = eval(first,A[i][0],second);
            s.push(result);
        }
        else
        {
            s.push(stoi(A[i]));
        }
    }
    return result;
}
int Solution::evalRPN(vector<string> &A) {
stack<string>k;
for(int i = 0; i < A.size(); i++)
    if(A[i] == "/" || A[i] == "*" || A[i] == "+" || A[i] == "-") {
        int y = stoi(k.top());k.pop();
        int x = stoi(k.top());k.pop();
        switch(A[i][0]) {
            case '+':  k.push(to_string(x + y));break;
            case '-':  k.push(to_string(x - y));break;
            case '*':  k.push(to_string(x * y));break;
            case '/':  k.push(to_string(x / y));break;
        }
    }
    else k.push(A[i]);

return stoi(k.top());
}
