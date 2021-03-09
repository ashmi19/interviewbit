

int Solution::bulbs(vector<int> &A) {
    int count = 0;

    for(int i:A) {
       //  cout<<i<<"   "<<count%2<<endl;
        if(i==count%2) count++;
    }
    return count;
}
