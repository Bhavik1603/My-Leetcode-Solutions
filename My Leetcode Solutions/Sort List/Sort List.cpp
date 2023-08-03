// https://leetcode.com/problems/sort-list

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
    ListNode* sortList(ListNode* head) {
        vector<int> x;
        ListNode *p;
        p=head;
        while(p!=nullptr)
        {
            x.push_back(p->val);
            p=p->next;
        }
        sort(x.begin(),x.end());
        p=head;
        int i=0;
        while(p!=nullptr)
        {
            p->val=x[i];
            i++;
            p=p->next;
        }
        return head;
    }
};