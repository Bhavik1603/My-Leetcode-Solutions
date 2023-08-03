// https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        multimap<int, int> m;
        vector<int> dp(nums.size()+1, 0);
        for(int i = 0; i < nums.size(); i++)
        {
            dp[nums[i]]++;
        }
        int sz = *max_element(dp.begin(), dp.end());
        vector<vector<int>> res(sz, vector<int>(1,0));
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = 0; j < res.size(); j++)
            {
                if(find(res[j].begin(), res[j].end(), nums[i]) == res[j].end())
                {
                    res[j].push_back(nums[i]);
                    break;
                }
            }
        }
        for(int i = 0; i < res.size(); i++) res[i].erase(res[i].begin());
        return res;
    }
};
