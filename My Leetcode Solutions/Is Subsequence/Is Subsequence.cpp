// https://leetcode.com/problems/is-subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x = 0;
        int count = 0;
        for(int i = 0; i < s.size(); i++)
        {
            for(int j = x; j < t.size(); j++)
            {
                if(t[j] == s[i])
                {
                    x = j;
                    t[j] = '*';
                    count++;
                    break;
                }
            }
        }
        if(count == s.size()) return true;
        return false;
    }
};