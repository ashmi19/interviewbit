
bool isCyclic(int curr , vector<vector<int>> &adj,vector<int> &vis)
{
    if(vis[curr] == 1) return true;
    vis[curr] = 1;

    for(auto i : adj[curr])
    {
        if(vis[i] != 2)
        {
            if(isCyclic(i,adj,vis))
             return true;
        }
    }
    vis[curr] = 2;
    return false;
}

int Solution::solve(int A, vector<int> &B, vector<int> &C)
{

    vector<vector<int>> adj(A+1 , vector<int> ());
    //unsigned int i;
    for(unsigned int i = 0 ; i < B.size() ; i++)   ///B cannot be greater in size ever.
    {
        adj[B[i]].push_back(C[i]);
    }
    vector<int> vis(A+1,0);

    for(int i = 1; i<=A;i++)
    {
        if(isCyclic(i,adj,vis))
         return 0;
    }
    return 1;
}
