// https://leetcode.com/problems/minimum-absolute-difference-in-bst

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
    vector<int> vec;
public:
    void inorder_traversal(TreeNode* root)
    {
        if(root != NULL) {
            inorder_traversal(root->left);
            vec.push_back(root->val);
            inorder_traversal(root->right);
        }
    }
    int getMinimumDifference(TreeNode* root) {
        inorder_traversal(root);
        int mini = 100001;
        for(int i = 0; i < vec.size()-1; i++)
        {
            int x = abs(vec[i] - vec[i+1]);
            if(x < mini) mini = x;
        }
        return mini;
    }
};