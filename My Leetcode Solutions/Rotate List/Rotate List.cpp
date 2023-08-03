// https://leetcode.com/problems/rotate-list

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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int> vec;
        ListNode *p;
        p = head;
        while(p!=NULL)
        {
            vec.push_back(p->val);
            p = p->next;
        }
        vector<int> temp;
        temp = vec;
        for(int i = 0; i < vec.size(); i++)
        {
            temp[(i+k)%vec.size()] = vec[i];
        }
        vec = temp;
        p = head;
        int i = 0;
        while(p!=NULL)
        {
            p->val = vec[i];
            i++;
            p = p->next;
        }
        return head;
    }
};