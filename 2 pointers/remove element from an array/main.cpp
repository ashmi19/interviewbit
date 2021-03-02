int Solution::removeElement(vector<int> &A, int B) {
   int avl = 0 , pos = 0;

   while(pos < A.size() && avl < A.size())
   {
       while(A[avl] != B && avl < A.size())
       {
           avl++;
       }

       if(pos==0)
       {
           while(pos < avl)
           {
               pos++;
           }
       }

       while(A[pos] == B && pos < A.size())
       {
           pos++;
       }
       if(avl < pos && pos < A.size())
       {
           swap(A[avl],A[pos]);
          // pos++;
       }
       //else if(avl>pos) pos++;
   }
  return avl;
}
/*

11 2 3 5 1 1 1 6 1 8 1 10
1





*/



int Solution::removeElement(vector<int> &A, int B) {

   int avl = 0 , pos = 0;

   while(pos < A.size())
   {
       if(A[pos] != B)
       {
           A[avl] = A[pos];
           avl++;
       }
       pos++;

   }
   return avl;
}



















