// https://leetcode.com/problems/swapping-nodes-in-a-linked-list

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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *p1,*p2;
        p1=head;
        p2=head;
        int i=1,x=1,y;
        while(p2->next!=nullptr)
        {
            if(i<k)
            {
                p1=p1->next;
                i++;
            }
            p2=p2->next;
            x++;
        }
        p2=p1;
        y=p1->val;
        p1=head;
        for(int j=1;j< x-k+1 ;j++)
        {
            p1=p1->next;
        }
        p2->val=p1->val;
        p1->val=y;
        return head;
    }
};