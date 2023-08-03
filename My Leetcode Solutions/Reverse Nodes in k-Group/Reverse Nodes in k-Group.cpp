// https://leetcode.com/problems/reverse-nodes-in-k-group

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> vec;
        ListNode *p;
        p = head;
        while(p!=NULL)
        {
            vec.push_back(p->val);
            p = p->next;
        }
        for(int i = 0; i < vec.size(); i+=k)
        {
            if(i+k <= vec.size())reverse(vec.begin()+i, vec.begin()+i+k);
        }
        int i = 0;
        p = head;
        while(p!=NULL)
        {
            p->val = vec[i];
            i++;
            p = p->next;
        }
        return head;
    }
};