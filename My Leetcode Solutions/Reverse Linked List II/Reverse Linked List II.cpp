// https://leetcode.com/problems/reverse-linked-list-ii

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        stack<int> StackOfValues;
        int x=1;
        ListNode *p;
        p=head;
        while(x!=left)
        {
            p=p->next;
            x++;
        }
        while(x!=right+1)
        {
            StackOfValues.push(p->val);
            p=p->next;
            x++;
        }
        x=1;
        p=head;
        while(x!=left)
        {
            p=p->next;
            x++;
        }
        while(x!=right+1)
        {
            p->val=StackOfValues.top();
            p=p->next;
            StackOfValues.pop();
            x++;
        }
        return head;
    }
};