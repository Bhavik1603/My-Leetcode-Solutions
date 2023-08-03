// https://leetcode.com/problems/find-peak-element

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int index = find(nums.begin(), nums.end(), maxi) - nums.begin();
        return index;
    }
};