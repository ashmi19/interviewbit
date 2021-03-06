int Solution::isPalindrome(int A)
{
    if(A < 0) return 0;        //corner case
    int len = log10(A) + 1;
    int mask = (int)pow(10,len-1);

    for(int i = 0 ; i < len/2 ;i++)
    {
        int MSB = A/mask;
        int LSB = A%10;
        if(MSB!=LSB) return 0;
        A %= mask;
        A /= 10;
        mask/=100;
    }
    return 1;
}
