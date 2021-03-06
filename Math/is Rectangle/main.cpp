int Solution::solve(int A, int B, int C, int D)
{
    if((A==B && C==D) || (A==C && B==D) || (A==D && C==B)) return 1;
    return 0;
    /*
    unordered_map<int,int> s;
    s[A]++;
    s[B]++;
    s[C]++;
    s[D]++;
    if(s.size() > 2) return 0;
   // if (s.size() == 1) return 1;
    if(s.size() == 2)
    {
        for(auto i : s)
        {
            if(i.second > 2) return 0;
        }
    }

    return 1;
    */
}
