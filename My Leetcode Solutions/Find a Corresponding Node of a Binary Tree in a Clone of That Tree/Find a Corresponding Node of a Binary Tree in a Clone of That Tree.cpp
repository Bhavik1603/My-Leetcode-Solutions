// https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode *p;
        stack<TreeNode *> s;
        p=cloned;
        while(p!=NULL || s.empty()==false)
        {
            while(p!=NULL)
            {
                s.push(p);
                p=p->left;
            }
            p=s.top();
            s.pop();
            if(p->val==target->val)
            {
                break;
            }
            p=p->right;
        }
        return p;
    }
};