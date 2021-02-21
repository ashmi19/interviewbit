#include <iostream>

using namespace std;
int Solution::lis(const vector<int> &A)
{
    if(A.size() <= 1) return A.size();

    vector<int> lis(A.size(),1);
   // int ans = INT_MIN;
   int ans = 1;   ///should be 1 beause thats minimum
    for(unsigned int curr = 1; curr < A.size() ; curr++)
    {
        //int currMax = INT_MIN;
        for(unsigned int start = 0 ; start < curr ; start++)
        {
            if(A[curr] > A[start] && lis[start]+1 > lis[curr])
            {
                lis[curr]  = lis[start]+1;
                ans = max(ans , lis[curr]);
            }
        }
       // ans = max(ans , currMax);
    }

    return ans;
}
// 16 0 8 4 12 2 10 6 14 1 9 5 13 3 11 7 15
// 4 1 2 1 5

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
