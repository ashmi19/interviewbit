/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode * getMiddle(ListNode *A)
 {
     ListNode *fast = A , *slow = A;
     while(fast && fast->next)
     {
         slow = slow->next;
         fast = fast->next->next;
     }
     return slow;
 }

ListNode * reverse(ListNode * A)
{
    ListNode *curr = A , *prev = NULL , *next = NULL;
    while(curr)
    {
       next = curr -> next;
       curr -> next = prev;
       prev = curr;
       curr = next;

    }
    //A->next = NULL;
    return prev;
}
void print(ListNode * A)
{
    while(A)
    {
        cout<<A->val<<" ";
        A= A->next;
    }
    cout<<"\n";
}
int Solution::lPalin(ListNode* A)
{

    if(!A) return 0;
    if(!A->next) return 1;
    ListNode* middle = getMiddle(A);
    /*
    if(middle->next == NULL)
    {
        if(A->val != A->next->val)
          return 0;
        else
         return 1;

    }
    */
    ListNode *B = reverse(middle);
   // cout<<middle->val<<"\n";
   //print(A);
   // print(B);
    middle->next = NULL;
    ListNode *t1 = A , *t2 = B;


    while(t2)
    {
        if(t1->val != t2->val)
        {
            return 0;
        }
       t1 = t1->next;
       t2 = t2->next;
    }
    return 1;

}
