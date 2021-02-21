vector<int> Solution::twoSum(const vector<int> &A, int B)
{
    unordered_map<int , int> index;
    for(unsigned int i = 0 ; i < A.size() ;i++)
    {
        if(index.find(B-A[i]) != index.end())
        {
            return {index[B-A[i]],i+1};
        }
        if(index.find(A[i]) == index.end())
        {
            index[A[i]] = i+1;
        }
    }
    return {};
}
