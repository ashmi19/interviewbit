long long sum(vector<int> &A)
{
    long long ans = 0;
    for(int i = 0 ; i < A.size() ;i++)
     ans+=A[i];

    return ans;
}
bool isPossible(vector<int> &A,int totalStd , int currMin)
{
    int currStd = 1;
    int currSum = 0;

    for(int i = 0 ; i < A.size();i++)
    {
        if(A[i] > currMin) return false;

        if(currSum + A[i] <= currMin)
        {
            currSum +=A[i];
        }
        else
        {
            currStd++;

            currSum = A[i];   //reset currSum for new student

            if(currStd > totalStd) return false;
        }
    }
    return true;
}
int Solution::books(vector<int> &A, int B)
{
    int n = A.size();

    if( n < B) return -1;

    int start = *min_element(A.begin(),A.end());
    long long end = sum(A);
    int result = INT_MAX;
    while(start <= end)
    {
        int mid = (start+end)/2;
        if(isPossible(A,B,mid))
        {
            result = min(result,mid);

            end = mid - 1;
        }
        else
        {
            start = mid+1;
        }
    }
    return (result != INT_MAX) ? result : -1;
}
