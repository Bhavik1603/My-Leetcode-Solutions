// https://leetcode.com/problems/height-checker

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected;
        expected.insert(expected.end(),heights.begin(),heights.end());
        sort(expected.begin(),expected.end());
        int count=0;
        for(int i=0;i<heights.size();i++)
        {
            if(expected[i]!=heights[i]) count++;
        }
        return count;
    }
};