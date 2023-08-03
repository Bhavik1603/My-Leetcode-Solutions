// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses

class Solution {
public:
    int maxDepth(string s) {
        int max = 0;
        stack<char> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') 
            {
                st.push(s[i]);
                if(st.size()>max) max = st.size();
            }
            else if(s[i]==')' && st.top() == '(' ) st.pop();
            else if(s[i]=='}' && st.top() == '{' ) st.pop();
            else if(s[i]==']' && st.top() == '[' ) st.pop();
        }
        return max;
    }
};