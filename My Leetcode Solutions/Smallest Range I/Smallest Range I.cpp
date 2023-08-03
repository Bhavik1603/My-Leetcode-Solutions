// https://leetcode.com/problems/smallest-range-i

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        if(abs(nums[0] - nums[nums.size()-1]) <= 2*k) return 0;
        nums[0] += k;
        nums[nums.size()-1] -= k;
        return nums[nums.size()-1]-nums[0];
    }
};