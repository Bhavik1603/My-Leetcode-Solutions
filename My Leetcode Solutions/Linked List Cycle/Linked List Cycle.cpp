// https://leetcode.com/problems/linked-list-cycle

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
    bool hasCycle(ListNode *head) {
        ListNode *p;
        p = head;
        if(p==NULL) return false;
        while(p->next!=NULL)
        {
            if(p->val==100001) return true;
            p->val = 100001;
            p = p->next; 
        }
        return false;
    }
};