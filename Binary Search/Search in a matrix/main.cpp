
int Solution::searchMatrix(vector<vector<int> > &A, int B)
{
    int r = A.size();
    int c = A[0].size();
    if(!r && !c) return 0;
    int i = 0 , j = c-1;

    while(i < r && j >= 0)
    {
        if(A[i][j] < B) i++;
        else if(A[i][j] > B) j--;
        else return 1;
    }
    return 0;
}
