// https://leetcode.com/problems/count-hills-and-valleys-in-an-array

class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int res = 0;
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        for(int i = 0; i < nums.size(); i++)
        cout << nums[i]  << " ";
        for(int i = 1; i < nums.size() - 1; i++)
        {
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1])
            {
                res++; // hill
            }
            else if(nums[i] < nums[i-1] && nums[i] < nums[i+1])
            {
                res++; // valley
            }
            else
            {
                // do nothing
            }
        }
        return res;
    }
};