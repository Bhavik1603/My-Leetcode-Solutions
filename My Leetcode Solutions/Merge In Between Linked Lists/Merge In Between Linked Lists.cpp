// https://leetcode.com/problems/merge-in-between-linked-lists

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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *p1,*p2,*p3;
        p1=list1;
        p2=list1;
        for(int i=0;i<b;i++)
        {
            if(i<a-1)
            {
                p1=p1->next;
            }
            p2=p2->next;
        }
        if(list2==nullptr)
        {
            p1->next=p2->next;
            return list1;
        }
        p3=list2;
        while(p3->next!=nullptr)
        {
            p3=p3->next;
        }
        p1->next=list2;
        p3->next=p2->next;
        return list1;
    }
};