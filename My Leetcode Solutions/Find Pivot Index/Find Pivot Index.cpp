// https://leetcode.com/problems/find-pivot-index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            int x = accumulate(nums.begin(), nums.begin() + i, 0);
            int y = accumulate(nums.begin() + i + 1, nums.end(), 0);
            if(x == y) return i;
        }
        return -1;
    }
};