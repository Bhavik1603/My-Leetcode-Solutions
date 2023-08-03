// https://leetcode.com/problems/remove-duplicates-from-sorted-list

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p1,*p2;
        if(head==nullptr) return nullptr;
        p1=head;
        p2=p1->next;
        while(p2!=nullptr)
        {
            if(p1->val==p2->val)
            {
                p1->next=p2->next;
                p2=p2->next;
            }
            else
            {
                p1=p1->next;
                p2=p2->next;
            }
        }
        return head;   
    }
};