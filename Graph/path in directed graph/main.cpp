

void dfs(int curr , const vector<vector<int>> &adj,vector<bool> &vis)
{
    vis[curr] = true;

    for(auto i : adj[curr])
    {
        if(!vis[i])
        {
            dfs(i,adj,vis);
        }
    }
}



int Solution::solve(int A, vector<vector<int> > &B)
{
    vector<vector<int>> adj(A+1,vector<int>());

    for(unsigned int i = 0 ; i < B.size() ; i++)
    {
        adj[B[i][0]].push_back(B[i][1]);
    }
    vector<bool> vis(A+1,false);

    dfs(1,adj,vis);

    if(vis[A])
     return 1;

    return 0;
}
