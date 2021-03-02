int Solution::diffPossible(vector<int> &A, int B)
{
    int r = 0 , l = 0;
    while(l < A.size())
    {
        int currDiff = A[l] - A[r];
        if(currDiff == B && l!=r) return 1;
        if(currDiff > B)
        {
            r++;
        }
        else //(currDiff > B)
        {
            l++;
        }

    }
    return 0;
}
