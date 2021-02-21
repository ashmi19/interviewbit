int Solution::solve(vector<int> &A, vector<int> &B, int C)
{
    // B is weights
    // A is values
    if(C <= 0) return 0;
    if(A.size() == 0) return 0;

    vector<vector<int>> maxValue(A.size()+1 , vector<int> (C+1 , 0));

    for(unsigned int row = 1 ; row <= A.size() ;row++)
    {
        for(unsigned int col = 1 ; col <= C ; col++)
        {
            if(B[row-1] <= col)
            {
                maxValue[row][col] = max(maxValue[row-1][col] , A[row-1]+maxValue[row-1][col-B[row-1]]);
            }
            else
            {
                maxValue[row][col] = maxValue[row-1][col];
            }
        }
    }
    return maxValue[A.size()][C];
}
/*
4 100 400 600 200
4 1 2 3 5
5

3 60 100 120
3 10 20 30
50


*/
