// https://leetcode.com/problems/swap-nodes-in-pairs

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
    ListNode* swapPairs(ListNode* head) {
        vector<int> x;
        ListNode* p;
        if(head==nullptr) return head;
        p=head;
        while(p!=nullptr)
        {
            x.push_back(p->val);
            p=p->next;
        }
        for(int i=0;i<x.size()-1;i+=2)
        {
            int j=i+1;
            int temp;
            temp=x[i];
            x[i]=x[j];
            x[j]=temp;
        }
        int i=0;
        p=head;
        while(p!=nullptr)
        {
            p->val=x[i];
            i++;
            p=p->next;
        }
        return head;
    }
};