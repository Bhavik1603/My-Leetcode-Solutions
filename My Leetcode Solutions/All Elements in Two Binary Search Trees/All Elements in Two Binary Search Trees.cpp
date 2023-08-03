// https://leetcode.com/problems/all-elements-in-two-binary-search-trees

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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        TreeNode *p;
        stack<TreeNode *> st;
        p=root1;
        vector<int> vec;
        while(p!=nullptr || st.empty()==false)
        {
            while(p!=nullptr)
            {
                st.push(p);
                p=p->left;
            }
            p=st.top();
            st.pop();
            vec.push_back(p->val);
            p=p->right;
        }
        p=root2;
        while(p!=nullptr || st.empty()==false)
        {
            while(p!=nullptr)
            {
                st.push(p);
                p=p->left;
            }
            p=st.top();
            st.pop();
            vec.push_back(p->val);
            p=p->right;
        }
        sort(vec.begin(),vec.end());
        return vec;
    }
};