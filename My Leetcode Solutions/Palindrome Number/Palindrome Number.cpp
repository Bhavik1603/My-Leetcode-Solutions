// https://leetcode.com/problems/palindrome-number

class Solution {
public:
    bool isPalindrome(int x) {
        string g= to_string(x);
        for(int i = 0, j = g.size() - 1; i<j; i++, j--)
        {
            if(g[i]!=g[j])
            {
                return false;
            }
        }
        return true;
    }
};