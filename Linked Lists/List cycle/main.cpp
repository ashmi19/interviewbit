/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    if(!A) return NULL;

    ListNode * slow = A , *fast = A;

    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) break;
    }
    if(!fast || !fast->next)
    {
        return NULL;
    }
    int len = 1;
    slow = slow->next;
    while(slow!=fast)
    {
        slow = slow -> next;
        len++;
    }

    slow = A , fast = A;

    while(len > 0)
    {
        slow = slow->next;
        len--;
    }

    while(slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
