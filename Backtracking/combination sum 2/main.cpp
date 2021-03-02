
void helper(int s ,vector<vector<int>> & ans,vector<int> &temp,const vector<int> &A,int target)
{
    if(target == 0) ans.push_back(temp);

    for(int i = s ; i < A.size() ; i++)
    {
        if(i!=s && A[i] == A[i-1])    ///i is not equal to the starting index
         continue;
        else if(target - A[i] >= 0)
        {
            temp.push_back(A[i]);
            helper(i+1,ans,temp,A,target-A[i]);
            temp.pop_back();
        }
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   sort(A.begin() , A.end());
   vector<vector<int>> ans;
   vector<int> temp;
   helper(0,ans,temp,A,B);

   return ans;

}
