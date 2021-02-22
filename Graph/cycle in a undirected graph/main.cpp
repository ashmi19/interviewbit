

bool isCyclic(int curr , const vector<vector<int>> &adj, vector<bool> &vis , int parent)
{
    vis[curr] = true;

    for(auto it : adj[curr])
    {
        if(vis[it] && it!=parent)
        {
            return true;
        }
        if(!vis[it] && isCyclic(it,adj,vis,curr))
        {
            return true;
        }
    }
    return false;
}

int Solution::solve(int A, vector<vector<int> > &B)
{
    vector<vector<int>> adj(A+1,vector<int>());

    for(unsigned int i = 0 ; i < B.size() ; i++)
    {
        adj[B[i][0]].push_back(B[i][1]);
        adj[B[i][1]].push_back(B[i][0]);
    }
    vector<bool> vis(A+1,0);

    for(int i = 1 ; i <= A ;i++)
    {
        if(vis[i] == false)
         {
             if(isCyclic(i,adj,vis,-1))
              return 1;
         }
    }
    return 0;
}
