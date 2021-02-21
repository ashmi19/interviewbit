int Solution::solve(vector<int> &A, int B)
{
    unordered_map<int , int> m;
    int count = 0;

    for(unsigned int i = 0 ; i < A.size() ; i++)
    {
        int curr_xor = B^A[i];

        if(m.find(curr_xor) != m.end())
        {
            count += m[curr_xor];
        }
        m[A[i]]++;
    }
    return count;
}
