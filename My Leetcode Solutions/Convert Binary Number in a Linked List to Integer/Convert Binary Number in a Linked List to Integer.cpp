// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer

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
    int getDecimalValue(ListNode* head) {
        string gg="";
        ListNode *t;
        t=head;
        while(t!=nullptr)
        {
            gg+=to_string(t->val);
            t=t->next;
        }
        int number =0;
        number = stoi(gg, 0, 2);
        return number;
    }
};