// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list

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
    int pairSum(ListNode* head) {
        int max=0,sum=0,i,j,n;
        ListNode *p;
        p=head;
        vector<int> x;
        while(p!=nullptr)
        {
            x.push_back(p->val);
            p=p->next;
        }
        n=x.size();
        for(i=0;i<n/2;i++)
        {
            sum=x[i]+x[n-1-i];
            if(sum>max) max=sum;
        }
        return max;
    }
};