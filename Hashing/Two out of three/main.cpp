vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C)
{
  unordered_set<int> a, b, c;
  for(auto x : A) a.insert(x);
  for(auto x : B) b.insert(x);
  for(auto x : C) c.insert(x);

  map<int,int> ans;
  for(auto x : a) ans[x]++;
  for(auto x : b) ans[x]++;
  for(auto x : c) ans[x]++;

  vector<int> res;

  for(auto x : ans)
  {
      if(x.second > 1) res.push_back(x.first);
  }
  return res;
}
