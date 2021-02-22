
bool isCyclic(int curr ,vector<vector<int>> &adj, vector<int> &vis)
{
  if(vis[curr] == 1) return true;

  vis[curr] = 1;

  for(int i = 0 ; i < adj[curr].size() ; i++)
  {
      if(vis[adj[curr][i]] != 2)
      {
          if(isCyclic(adj[curr][i],adj,vis))
           return true;
      }
  }
  vis[curr] = 2;
  return false;
}

int Solution::solve(int A, vector<vector<int> > &B)
{
    vector<vector<int>> adj(A+1,vector<int>());

    for(unsigned int i = 0 ; i < B.size() ; i++)
    {
        adj[B[i][0]].push_back(B[i][1]);
    }
    vector<int> vis(A+1,0);

    for(int i = 1 ; i <= A ;i++)
    {
        if(vis[i] == 0)
        {
            if(isCyclic(i,adj,vis))
             return 1;
        }
    }
    return 0;
}

