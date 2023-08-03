// https://leetcode.com/problems/replace-all-digits-with-characters

#include <string>
class Solution {
public:
    string replaceDigits(string s) {
        for(int i=1; i < s.size(); i+=2)
        {
            int x = s[i] - 48;
            s[i] = s[i-1] +x;
            // cout << x << " ";
        }
        return s;
    }
};