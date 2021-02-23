/// WITH stack

int Solution::solve(string A)
{
    int ans = 0;
    stack<char> s;

    for(unsigned int i = 0 ; i < A.length() ; i++)
    {
        if(A[i] == '(')
        {
            s.push('(');
        }
        else
        {
            if(!s.empty())
            {
                s.pop();
            }
            else
            {
                ans++;
            }
        }
    }
    ans += s.size();

    return ans;
}

/// WITH ONLY VARIABLES

int Solution::solve(string A)
{
    int openBrkt = 0 , req = 0;

    for(unsigned int i = 0 ; i < A.length() ;i++)
    {
        if(A[i] == '(')
        {
            openBrkt++;
        }
        else
        {
            if(openBrkt > 0) openBrkt--;
            else
               req++;
        }
    }

    return req+openBrkt;
}
