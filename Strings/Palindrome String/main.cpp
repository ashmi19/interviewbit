int Solution::isPalindrome(string A)
{
    unsigned int i = 0;
    unsigned int j = A.length()-1;
    while(i < j)
    {
        while(((A[i] < '1' ) || (A[i] > '9' && A[i] < 'A') || (A[i] > 'Z' && A[i] < 'a') || (A[i] > 'z')) && i < A.length())
        {
            i++;
        }
        while(((A[j] < '1' ) || (A[j] > '9' && A[j] < 'A') || (A[j] > 'Z' && A[j] < 'a') || (A[j] > 'z')) && i < j)
        {
            j--;
        }
        if(i == A.length())
        {
            return 1;
        }
        if(A[i] != A[j])
        {
            if((A[i] > A[j] && A[i]-32!=A[j]) || (A[j] > A[i] && A[j]-32 != A[i]))
            {
                return 0;
            }
        }

        i++;
        j--;

    }
    return 1;
}
///
///
///
/// SHORTEST WAY
int Solution::isPalindrome(string A)
{
    unsigned int i = 0;
    unsigned int j = A.length()-1;
    while(i < j)
    {
       while( i < j && !isalnum(A[i]))
       {
           i++;
       }
       while( i < j && !isalnum(A[j]))
       {
           j--;
       }
       if(toupper(A[i]) != toupper(A[j]))
       {
           return false;
       }
       i++;
       j--;
    }
    return true;
}
