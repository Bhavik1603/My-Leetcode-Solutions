// https://leetcode.com/problems/range-sum-of-bst

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        TreeNode *p;
        stack<TreeNode *> s;
        p=root;
        int sum=0;
        while(p!=NULL || s.empty()==false)
        {
            while(p!=NULL)
            {
                s.push(p);
                p=p->left;
            }
            p=s.top();
            s.pop();
            if(p->val>=low && p->val<=high)
            {
                sum+=p->val;
            }
            p=p->right;
        }   
        return sum;
    }
};