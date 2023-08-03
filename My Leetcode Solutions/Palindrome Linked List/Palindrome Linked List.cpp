// https://leetcode.com/problems/palindrome-linked-list

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
    bool isPalindrome(ListNode* head) {
        ListNode *p;
        p=head;
        string gg="";
        while(p!=nullptr)
        {
            gg+= to_string(p->val);
            p=p->next;
        }
        string aa;
        aa=gg;
        reverse(gg.begin(),gg.end());
        if(aa.compare(gg)==0)
        {
            return true;
        }
        return false;
    }
};