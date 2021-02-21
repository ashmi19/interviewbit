
vector<int> Solution::solve(vector<int> &A)
{

  vector<int> ans;
  unsigned int i = 0;
  while(A[i] < 0 && i <A.size())
  {
      i++;
  }
 // if(i == A.size()) i = A.size()-1;
  int j = i - 1;

  while(j>=0 && i < A.size())
  {
      if(abs(A[j]) <= abs(A[i]))
      {
          ans.push_back((A[j]*A[j]));
          j--;
      }
      else
      {
          ans.push_back((A[i]*A[i]));
          i++;
      }
  }
  while(j >=0 )
  {
      ans.push_back((A[j]*A[j]));
      j--;
  }
  while(i < A.size())
  {
       ans.push_back((A[i]*A[i]));
       i++;
  }
   return ans;
}
