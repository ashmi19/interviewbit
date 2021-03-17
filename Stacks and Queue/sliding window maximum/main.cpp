vector<int> Solution::slidingMaximum(const vector<int> &A, int B)
{
    if (A.size() == 0) return {};
    if (A.size() == 1) return {A[0]};
    if (A.size() < B) return {};

    deque<int> q;
    vector<int> ans;
   // q.push(0);
    for(int i = 0 ; i < B ; i++)
    {
        while(!q.empty() && A[q.back()] <= A[i])
        {
           q.pop_back();
        }
        q.push_back(i);
    }

    ans.push_back(A[q.front()]);
    for(int i = B ; i < A.size() ;i++)
    {
        while(!q.empty() && q.front() < i-B+1 )
        {
            q.pop_front();
        }
        /*
        if(!q.empty() && A[q.back()] < A[i]) q.push(i);
        else if (q.empty()) q.push(i);

        while(A[q.front()] < A[q.back()] && q.size() > 1)
        {
           q.pop();
        }
        */
        while(!q.empty() && A[q.back()] <= A[i])
        {
           q.pop_back();
        }
        q.push_back(i);

        ans.push_back(A[q.front()]);
    }
    return ans;
}
