// https://leetcode.com/problems/remove-linked-list-elements

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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *p;
        p=head;
        if(head==nullptr) return head;
        vector<int> res;
        while(p!=nullptr)
        {
            res.push_back(p->val);
            p=p->next;
        }
        res.erase(remove(res.begin(),res.end(),val),res.end());
        if(res.size()==0) return nullptr;
        int i=0;
        p=head;
        ListNode *j;
        
        while(i<res.size())
        {
            p->val=res[i];
            j=p;
            p=p->next;
            i++;
        }
        j->next=nullptr;
        return head;
    }
};