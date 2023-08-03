// https://leetcode.com/problems/linked-list-cycle-ii

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *p;
        p = head;
        if(p==NULL || p->next == NULL) return NULL;
        while(p!=NULL)
        {
            if(p->val==100001)
            {
                return p;
                p->val=100002;
            }
            p->val = 100001;
            p = p->next; 
        }
        return p;
    }
};