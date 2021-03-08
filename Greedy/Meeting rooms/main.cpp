int Solution::solve(vector<vector<int> > &A)
{
    if(A.size() <= 1) return A.size();

    vector<int> time1;
    vector<int> time2;

    for(int i = 0 ; i < A.size() ; i++)
    {
        time1.push_back(A[i][0]);
        time2.push_back(A[i][1]);
    }
    sort(time1.begin(),time1.end());
    sort(time2.begin(),time2.end());
    int ans = 0,curr = 0;
    int n =time1.size();
    int i = 0 , j = 0;
    while(i < n && j < n)
    {
        if(time1[i] < time2[j])
        {
            curr++;
            ans = max(ans , curr);
            i++;
        }
        else   ///else or overlap
        {
            curr--;
            j++;
        }
    }
    return ans;
}
