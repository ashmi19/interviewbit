int Solution::coverPoints(vector<int> &A, vector<int> &B)
{
    int minSteps = 0;

    for(unsigned int i = 1 ; i < A.size() ; i++)
    {
        minSteps += max(abs(A[i]-A[i-1]),abs(B[i]-B[i-1]));
    }
    return minSteps;
}
