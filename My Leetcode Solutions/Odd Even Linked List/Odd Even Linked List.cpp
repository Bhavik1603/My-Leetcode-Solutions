// https://leetcode.com/problems/odd-even-linked-list

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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *p;
    p=head;
    vector<int> res;
    vector<int> res2;
    int i=1;
    while(p!=nullptr)
    {
        if(i%2!=0) res.push_back(p->val);
        else res2.push_back(p->val);
        i++;
        p=p->next;
    }
    i=0;
    p=head;
    while(i<res.size())
    {
        p->val=res[i];
        p=p->next;
        i++;
    }
    i=0;
    while(i<res2.size())
    {
        p->val=res2[i];
        p=p->next;
        i++;
    }
    return head;
    }
};