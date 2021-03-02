void Solution::merge(vector<int> &A, vector<int> &B)
{


    int n = A.size() , m = B.size();
    int i = n-1, j = m-1 , k = n+m-1;
    A.resize(n+m);
    while( i >= 0 && j >= 0)
    {
        if(A[i] >= B[j])
        {
            A[k] = A[i];
            i--;
            k--;
        }
        else
        {
            A[k] = B[j];
            j--;
            k--;
        }
    }
    while(j >= 0)
    {
        A[k] = B[j];
        k--;
        j--;
    }

    /*
    int i = 0, j = 0;
    while(i < A.size() && j < B.size())
    {
        if(A[i] <= B[j])
        {
            i++;
        }
        else
        {
            A.insert(A.begin()+i,B[j]);
            j++;
        }
    }
    while(j < B.size())
    {
        A.push_back(B[j]);
        j++;
    }
  */
}
