int Solution::lengthOfLastWord(const string A)
{
    int j = A.length()-1;
    int len = 0;
    while(j >= 0 && A[j] ==' ')
    {
        j--;
    }
  //  if(j < 0) return len;
   // int end = j+1;
    while(j >= 0 && A[j] != ' ')
    {
        len++;
        j--;
    }
   // j = j+1;
    //len = end - j;

    return len;
}
