/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /// Iterative
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B)
{
    if(A && !B) return A;
    if(!A && B) return B;
    if(!A && !B) return NULL;

    ListNode *newHead = NULL, *t1 = A ,*t2 = B , *curr = NULL;

    if(t1->val <= t2->val)
    {
        newHead = t1;
        t1 = t1->next;
    }
    else
    {
        newHead = t2;
        t2 = t2->next;
    }
    curr = newHead;

    while(t1 && t2)
    {
        if(t1->val <= t2->val)
        {
            curr->next = t1;
            t1 = t1->next;
        }
        else
        {
            curr->next = t2;
            t2 = t2->next;
        }
        curr = curr->next;
    }
    curr->next = (t1) ? t1 : t2;

    return newHead;
}
/// Recursive
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B)
{
    if(!B) return A;
    if(!A) return B;

    if(A->val <= B-> val)
    {
        A->next = mergeTwoLists(A->next,B);
        return A;
    }
    else
    {
        B->next = mergeTwoLists(A,B->next);
        return B;
    }


}
