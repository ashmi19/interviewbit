/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int len(ListNode * A)
{
    int count = 0;
    while(A)
    {
        A = A->next;
        count++;
    }
    return count;
}

ListNode* Solution::rotateRight(ListNode* A, int B)
{
    if(B < 0) return A;
    B = B % (len(A));
    if( B == 0) return A;

    ListNode * newHead =  NULL , *windowStart = A , *windowEnd = A;
    int windowLen = B;

    while(windowLen > 0)
    {
        windowEnd = windowEnd -> next;
        windowLen--;
    }
    while(windowEnd -> next)
    {
        windowStart = windowStart->next;
        windowEnd = windowEnd -> next;
    }
    newHead = windowStart -> next;
    windowStart->next = NULL;
    windowEnd -> next = A;

    return newHead;
}
