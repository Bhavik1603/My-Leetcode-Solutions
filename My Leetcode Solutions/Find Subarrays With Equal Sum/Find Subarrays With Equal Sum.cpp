// https://leetcode.com/problems/find-subarrays-with-equal-sum

class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        for(int i = 0; i < nums.size() - 1; i++)
        {
            int sum = nums[i] + nums[i+1];
            for(int j = i+1; j < nums.size()-1; j++)
            {
                if(sum == nums[j] + nums[j+1])
                {
                    cout << sum << " "<< nums[j] + nums[j+1] << " " << j;
                    return true;
                }
            }
        }
        return false;
    }
};