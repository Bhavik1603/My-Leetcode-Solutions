// https://leetcode.com/problems/left-and-right-sum-differences

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> answer;
        for(int i = 0; i < nums.size(); i++)
        {
            int x = accumulate(nums.begin(), nums.begin() + i, 0);
            int y = accumulate(nums.begin() + i + 1, nums.end(), 0);
            x = abs(x - y);
            answer.push_back(x);
        }
        return answer;
    }
};