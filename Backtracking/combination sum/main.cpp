
void helper(vector<vector<int>> &ans,const vector<int> &A,vector<int> &temp,int target,int start)
{
   if(target == 0)
   {
       ans.push_back(temp);
   }
   //if(target < 0) return;

   for(int i = start ; i < A.size() ; i++)
   {
       if(target - A[i] >= 0)
       {
           temp.push_back(A[i]);
           helper(ans,A,temp,target-A[i],i);
           temp.pop_back();
       }
   }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B)
{
    sort(A.begin(),A.end());
    A.erase(unique(A.begin(),A.end()),A.end());
    vector<vector<int>> ans;
    vector<int> temp;
    helper(ans,A,temp,B,0);
    return ans;
}
