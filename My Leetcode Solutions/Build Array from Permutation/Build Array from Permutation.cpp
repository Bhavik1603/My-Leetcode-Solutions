// https://leetcode.com/problems/build-array-from-permutation

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int i;
        vector<int> arr;
        for(i=0;i<nums.size();i++)
        {
            arr.push_back(nums[nums[i]]);
        }
        return arr;
    }
};