// https://leetcode.com/problems/reverse-linked-list

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
    ListNode* reverseList(ListNode* head) {
        stack<int> t;
        ListNode* p;
        p=head;
        while(p!=nullptr)
        {
            t.push(p->val);
            p=p->next;
        }
        p=head;
        while(p!=nullptr)
        {
            p->val=t.top();
            t.pop();
            p=p->next;
        }
        return head;
    }
};