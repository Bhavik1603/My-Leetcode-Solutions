// https://leetcode.com/problems/intersection-of-multiple-arrays

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>vec;
        vector<int>::iterator it;
        for(int i=0;i<nums[0].size();i++)
        {
            int count=0;
            for(int j=0;j<nums.size();j++)
            {
                it = std::find (nums[j].begin(), nums[j].end(), nums[0][i]);
                if (it != nums[j].end())
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if(count==nums.size()) vec.push_back(nums[0][i]);
        }
        sort(vec.begin(),vec.end());
        return vec;
    }
};