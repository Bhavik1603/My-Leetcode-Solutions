// https://leetcode.com/problems/remove-outermost-parentheses

class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' && st.empty()){
                st.push(s[i]);
            }
            else if(s[i]=='('){
                st.push(s[i]);
                res+=s[i];
            }
            else{
                st.pop();
                if(st.size()){
                    res+=s[i];
                }
            }
        }
        return res;
    }
};