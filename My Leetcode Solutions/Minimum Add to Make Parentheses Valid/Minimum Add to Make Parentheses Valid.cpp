// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> open;
        stack<char> close;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                open.push('(');
            }
            else
            {
                if(!open.empty())
                {
                    open.pop();
                }
                else
                {
                    close.push(')');
                }
            }
        }
        return open.size() + close.size();
    }
};