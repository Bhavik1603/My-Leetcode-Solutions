// https://leetcode.com/problems/middle-of-the-linked-list

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
    ListNode* middleNode(ListNode* head) {
        ListNode *p;
        p=head;
        int x=0,y=0;
        while(p!=nullptr)
        {
            x++;
            p=p->next;
        }
        if(x%2==0) x= x/2;
        else x=ceil(x/2);
        p=head;
        while(y<x)
        {
            p=p->next;
            y++;
        }
        return p;
    }
};