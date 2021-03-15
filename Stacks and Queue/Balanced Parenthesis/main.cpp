int Solution::solve(string A)
{
    int open = 0 , reqd = 0;

    for(int i = 0; i < A.length() ; i++)
    {
        if(A[i] == '(') open++;
        else
        {
            if(open > 0) open--;
            else reqd++;
        }
    }
    if(reqd+open == 0)
    {
        return 1;
    }
    return 0;
}
