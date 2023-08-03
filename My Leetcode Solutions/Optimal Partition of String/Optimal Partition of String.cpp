// https://leetcode.com/problems/optimal-partition-of-string

class Solution {
public:
    int partitionString(string s) {
        vector<string> res;
        string gg = "";
        gg += s[0];
        for(int i = 1; i < s.size(); i++)
        {
            if(gg.find(s[i]) == string::npos) gg += s[i];
            else
            {
                res.push_back(gg);
                gg = "";
                i--;
            }
        }
        if(gg.size() != 0) res.push_back(gg);
        return res.size();
    }
};