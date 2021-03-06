bool isPossible(vector<int> &A , int reqdWood , int height)
{
    long long currWood = 0;
    for(int i = 0; i < A.size() ; i++)
    {
        if(A[i] > height)
        {
            currWood += (A[i] - height);
            if(currWood > reqdWood) return true;
        }
    }
    if(currWood >= reqdWood) return true;

    return false;
}
int Solution::solve(vector<int> &A, int B)
{
    int n = A.size();
    int start = 0;
    int end = *max_element(A.begin(),A.end());  //max height for cut could be the max length of tree
    int result = INT_MIN;
    while(start <= end)
    {
        int mid = (start+end)/2;

        if(isPossible(A,B,mid))
        {
            result = max(mid,result);   ///get the max of the height to be cut at to not waste trees

            start = mid+1; //SEE IF we can cut at more height to save trees
        }
        else
        {
            end = mid-1;
        }

    }
    return result;
}
