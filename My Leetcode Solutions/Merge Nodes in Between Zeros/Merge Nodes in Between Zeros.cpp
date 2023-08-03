// https://leetcode.com/problems/merge-nodes-in-between-zeros

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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *p;
        int sum=0;
        p=head;
        p=p->next;
        while(p->val!=0)
        {
            sum+=p->val;
            p=p->next;
        }
        ListNode *res,*t,*x;
        res=(ListNode *)malloc(sizeof(ListNode));
        res->val=sum;
        res->next=nullptr;
        x=res;
        sum=0;
        while(p->next!=nullptr)
        {
            sum+=p->val;
            p=p->next;
            if(p->val==0)
            {
                t=(ListNode *)malloc(sizeof(ListNode));
                t->val=sum;
                t->next=nullptr;
                x->next=t;
                x=t;
                sum=0;
                
            }
        }
        
        return res;
    }
};