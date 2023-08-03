// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int n=0;
        ListNode *t;
        t=head;
        while(t!=nullptr)
        {
            n++;
            t=t->next;
        }
        if(n==1) return nullptr;
        ListNode* x;
        t=head;
        int i=0;
        while(i<n/2)
        {
            x=t;
            t=t->next;
            i++;
        }
        x->next=t->next;
        return head;
    }
};