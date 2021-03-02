


void helper(int curr , int end , vector<vector<int>> &ans, vector<int> temp,int count)
{
    if(temp.size() == count)
    {
        ans.push_back(temp);
    }
   // if(curr > end) return;
    for(int i = curr ; i <= end; i++)
    {
        temp.push_back(i);
        helper(i+1,end,ans,temp,count);
        temp.pop_back();

    }
}
vector<vector<int> > Solution::combine(int A, int B)
{
    vector<vector<int>> ans;
    vector<int> temp;
    helper(1,A,ans,temp,B);

    return ans;
}
