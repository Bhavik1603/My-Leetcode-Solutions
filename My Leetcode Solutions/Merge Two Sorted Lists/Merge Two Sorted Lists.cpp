// https://leetcode.com/problems/merge-two-sorted-lists

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *p1,*p2,*t;
        p1=list1;
        p2=list2;
        vector<int> v1;
        if(list1==nullptr && list2==nullptr)
        {
            return nullptr;
        }
        if(list1==nullptr)
        {
            list1=list2;
            return list1;
        }
        if(list2==nullptr)
        {
            return list1;
        }
        while(p1!=nullptr)
        {
            v1.push_back(p1->val);
            p1=p1->next;
        }
        while(p2!=nullptr)
        {
            v1.push_back(p2->val);
            p2=p2->next;
        }
        sort(v1.begin(),v1.end());
        p1=list1;
        p2=list2;
        while(p1->next!=nullptr) p1=p1->next;
        p1->next=p2;
        p1=list1;
        for(int i=0;i<v1.size();i++)
        {
            p1->val=v1[i];
            p1=p1->next;
        }
        return list1;
    }
};