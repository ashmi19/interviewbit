int Solution::solve(vector<int> &A)
{
    int maxEle = INT_MIN , minEle = INT_MAX;

    for(unsigned int i = 0 ; i < A.size() ; i++)
    {
        maxEle = max(A[i],maxEle);
        minEle = min(A[i],minEle);
    }
    return maxEle+minEle;
}
