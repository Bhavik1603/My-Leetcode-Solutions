// https://leetcode.com/problems/separate-the-digits-in-an-array

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> answer;
        for(int i = 0; i < nums.size(); i++)
        {
            string g = to_string(nums[i]);
            for(int j = 0; j < g.size(); j++)
            {
                answer.push_back(g[j] - 48);
            }
        }
        return answer;
    }
};