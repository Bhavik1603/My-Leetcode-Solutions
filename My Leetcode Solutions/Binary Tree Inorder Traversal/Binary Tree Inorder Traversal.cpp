// https://leetcode.com/problems/binary-tree-inorder-traversal

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
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode *p;
        stack<TreeNode *> s;
        vector<int> x;
        p=root;
        while(p!=NULL || s.empty()==false)
        {
            while(p!=NULL)
            {
                s.push(p);
                p=p->left;
            }
            p=s.top();
            s.pop();
            x.push_back(p->val);
            p=p->right;
        }
        return x;
    }
};