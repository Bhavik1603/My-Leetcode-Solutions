// https://leetcode.com/problems/positions-of-large-groups

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> res;
        int j;
        for(int i = 0; i < s.size(); i++)
        {
            vector<int> temp;
            for(j = i; s[j]==s[i]; j++);
            if(j-i >= 3)
            {
                temp.push_back(i);
                temp.push_back(j-1);
                res.push_back(temp);
            }
            i = j-1;
            temp.clear();
        }
        return res;
    }
};