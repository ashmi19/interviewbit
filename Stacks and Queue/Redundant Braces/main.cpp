bool isOperator(char c)
{
    if(c == '+' || c == '-' || c == '*' || c == '/') return true;

    return false;
}
int Solution::braces(string A)
{
    stack<char> s;
    for(int i = 0 ; i < A.length() ;i++)
    {
        if(A[i] != ')')
        {
            s.push(A[i]);
        }
        else
        {
            bool hasOperator =  false;
            char top = s.top();

            while(!s.empty() && top!= '(')
            {
                if(isOperator(top) == true)
                {
                    hasOperator = true;
                }
                top = s.top();
                s.pop();
            }

            if(hasOperator == false) return true;
        }
    }

    return false;
}
