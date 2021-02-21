vector<int> Solution::repeatedNumber(const vector<int> &A)
{
    unsigned int n = A.size();
   // unsigned int long long sum = (n*(n+1))/2;
   // unsigned int long long sqSum = (n*(n+1)((2*n) + 1))/6;
    long long int sum = 0;
    long long int sqSum = 0;
    for(unsigned int curr =  0 ; curr < n ; curr++)
    {

        int temp = A[curr];
        sum += (curr + 1);
        sum -= temp;

        sqSum += (long long)(curr+1) * (long long)(curr+1);
        sqSum -= (long long)(temp)*(long long)(temp);

       // sum -= A[curr];
        //sqSum -= (A[curr] * A[curr]);
    }

    sqSum/=sum;

    int B = (int) ((sqSum+sum)/2);   ///missing num
    int AA = (int) B - sum;        ///repeating num

    return {AA,B};
}
