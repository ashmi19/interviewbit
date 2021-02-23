string Solution::solve(string A)
{

    int i = 0 ;
    int start = 0;
    stack<string> s;
    while ( i < A.length())
    {

        while(A[i] == ' ' && i < A.length())
        {
            i++;
        }
        start = i;
        while(A[i] != ' ' && i < A.length())
        {
            i++;
        }
        int end = i-1;
        string word = A.substr(start, end-start+1);
        if(word.length() > 0) s.push(word);
    }

    string ans = "";
    while(!s.empty())
    {
        ans.append(s.top());
        ans.push_back(' ');
        s.pop();
    }
    ans.pop_back();
    return ans;

}








