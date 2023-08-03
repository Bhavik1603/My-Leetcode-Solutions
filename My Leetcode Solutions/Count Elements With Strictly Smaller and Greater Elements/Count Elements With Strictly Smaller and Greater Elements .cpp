// https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements

class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = nums.size();
        if(nums[0] != nums[nums.size() - 1])
        {
            res -= count(nums.begin(), nums.end(), nums[0]);
            res -= count(nums.begin(), nums.end(), nums[nums.size() - 1]);
        }
        else
        {
            return 0;
        }
        return res;
    }
};