void getSubsets(vector<vector<int>> &ans,const vector<int> &A,int start,vector<int> &temp)
{
    ans.push_back(temp);
    if(start == A.size())
    {
        return;
    }
    for(int i = start ; i < A.size() ; i++)
    {
        temp.push_back(A[i]);
        getSubsets(ans,A,i+1,temp);
        temp.pop_back();
    }
}
vector<vector<int> > Solution::subsets(vector<int> &A)
{
    sort(A.begin(),A.end());
    A.erase(unique(A.begin(),A.end()),A.end());
    vector<vector<int>> ans;
    vector<int> temp;
    getSubsets(ans,A,0,temp);

    return ans;
}
