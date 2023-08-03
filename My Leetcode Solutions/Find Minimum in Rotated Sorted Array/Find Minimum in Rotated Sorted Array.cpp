// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array

class Solution {
public:
    int findMin(vector<int>& nums) {
        int res = *min_element(nums.begin(),nums.end());
        return res;
    }
};