int Solution::solve(string A, string B)
{
    int lenA = A.length() , lenB = B.length();

    if(lenA == 0 || lenB == 0) return 0;

    vector<vector<int>> lcs(lenA+1 , vector<int>(lenB+1,0));

    for(unsigned int row = 1; row <= lenA ; row++)
    {
        for(unsigned int col = 1 ; col <= lenB ; col++)
        {
            if(A[row-1] == B[col-1])
            {
                lcs[row][col] = lcs[row-1][col-1] + 1;
            }
            else
            {
                lcs[row][col] = max(lcs[row-1][col],lcs[row][col-1]);
            }
        }
    }
    return lcs[lenA][lenB];
}
