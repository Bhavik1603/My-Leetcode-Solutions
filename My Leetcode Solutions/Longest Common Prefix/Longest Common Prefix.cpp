// https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = "";
        for(int i = 0; i < strs[0].size(); i++)
        {
            char c = strs[0][i];
            int count = 0;
            for(int j = 0; j < strs.size(); j++)
            {
                if(i < strs[j].size())
                {
                    if(c == strs[j][i]) count++;   
                }
                else
                {
                    break;
                }
            }
            if(count == strs.size()) str += strs[0][i];
            else break;
        }
        return str;
    }
};