int Solution::minDistance(string A, string B)
{
    if(A.length() == 0) return B.length();
    if(B.length() == 0) return A.length();

    int lenA = A.length() , lenB = B.length();

    vector<vector<int>> minDist(lenA+1, vector<int> (lenB+1,0));

    for(unsigned int row = 0 ; row <= lenA ; row++)
    {
        for(unsigned int col = 0 ; col <=lenB ;col++)
        {
            if(col == 0 || row == 0)
            {
                minDist[row][col] = (row > 0) ? row : col;
            }
            else
            {
                if(A[row-1] == B[col-1])
                {
                    minDist[row][col] = minDist[row-1][col-1];
                }
                else
                {
                    minDist[row][col] = min(minDist[row-1][col],min(minDist[row][col-1],minDist[row-1][col-1])) + 1;
                }
            }
        }
    }
    return minDist[lenA][lenB];
}
