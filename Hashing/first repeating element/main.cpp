int Solution::solve(vector<int> &A)
{
    unordered_map<int,int> index;
    int ans = INT_MAX;

    for(unsigned int i = 0 ; i < A.size() ; i++)
    {
        if(index.find(A[i]) == index.end())
        {
            index[A[i]] = i;
        }
        else
        {
            ans = min(ans,index[A[i]]);
        }
    }
    if(ans == INT_MAX) return -1;

    return A[ans];
}
