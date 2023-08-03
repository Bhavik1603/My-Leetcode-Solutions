// https://leetcode.com/problems/intersection-of-two-linked-lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode *p,*p2;
        p=headA;
        p2=headB;
        while(p!=nullptr)
        {
            p2=headB;
            while(p2!=nullptr)
            {
                if(p2 == p)
                {
                    return p2;
                }
                p2=p2->next;
            }
            p=p->next;
        }
        return nullptr;
    }
};