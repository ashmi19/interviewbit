int getPivot(const vector<int> &A,int l,int h)
{
    if(l>h) return -1;
    if(l==h) return l;

    int m = (l+h)/2;
    if(l < m && A[m-1] > A[m]) return m-1;

    if(h > m && A[m+1] < A[m]) return m;

    if(A[l] >= A[m]) return getPivot(A,l,m-1);

    return getPivot(A,m+1,h);
}

int binSearch(const vector<int> &A,int l,int h,int key)
{
    while(l <= h)
    {
        int m = (l+h)/2;

        if(A[m] == key) return m;
        else if(A[m] < key)
        {
            l = m+1;
        }
        else
        {
            h = m -1;
        }
    }
    return -1;
}
int Solution::search(const vector<int> &A, int B)
{
    int pivot = getPivot(A,0,A.size());

    if(A[pivot] == B) return pivot;

    if(pivot == -1) return binSearch(A,0,A.size()-1,B);
    /*
    int ans = binSearch(A,0,pivot,B);

    if(ans == -1)
    {
        return binSearch(A,pivot+1,A.size()-1,B);
    }
    return ans;
    */

    if (B <= A[pivot] && B >= A[0])
    {
        return binSearch(A,0,pivot,B);
    }
    else
    {
        return binSearch(A,pivot+1,A.size()-1,B);
    }
}
