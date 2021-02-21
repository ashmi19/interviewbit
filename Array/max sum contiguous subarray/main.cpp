int Solution::maxSubArray(const vector<int> &A)
{
    int currSum = A[0];
    int maxSum = A[0];

    for(unsigned int i = 1 ; i < A.size() ; i++)
    {
        currSum = max(currSum+A[i] , A[i]);
        maxSum = max(currSum , maxSum);
    }

    return maxSum;
}
