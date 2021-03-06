int isPower(int A)
{
    if (A==1)  return true;

    // Try all numbers from 2 to sqrt(n) as base
    for (int x=2; x<=sqrt(A); x++)
    {
        unsigned y = 2;
        unsigned p = pow(x, y);

        // Keep increasing y while power 'p' is smaller
        // than n.
        while (p<=A && p>0)
        {
            if (p==A)
                return true;
            y++;
            p = pow(x, y);
         }
    }
    return false;
}
/////////////////////////////////
int Solution::isPower(int A)
{
    if(A <= 1) return 1;

    for(int i = 2; i*i <= A ; i++)
    {
        double val = log(A)/log(i);
        if(val - (int)val <  0.00000001)
         return 1;
    }
    return 0;
}
