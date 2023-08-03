// https://leetcode.com/problems/remove-nth-node-from-end-of-list

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> res;
        ListNode *t;
        t=head;
        while(t!=nullptr)
        {
            res.push_back(t->val);
            t=t->next;
        }
        reverse(res.begin(),res.end());
        res.erase(res.begin()+n-1);
        if(res.size()==0) return nullptr;
        reverse(res.begin(),res.end());
        int i=0;
        t=head;
        ListNode *x;
        while(i<res.size())
        {
            t->val=res[i];
            i++;
            x=t;
            t=t->next;
        }
        x->next=nullptr;
        return head;
    }
};