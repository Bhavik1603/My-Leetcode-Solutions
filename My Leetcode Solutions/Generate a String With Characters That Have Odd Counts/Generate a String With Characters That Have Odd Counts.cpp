// https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts

class Solution {
public:
    string generateTheString(int n) {
        string res = "";
        if(n%2 != 0)
        {
            for(int i = 0; i < n; i++)
            {
                res += "a";
            }
            return res;
        }
        else
        {
            for(int i = 0; i < n-1; i++)
            {
                res += "a";
            }
            res +="b";
        }
        return res;
    }
};