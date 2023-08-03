// https://leetcode.com/problems/largest-perimeter-triangle

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = nums.size() - 1; i >= 2; i--)
        {
            int sideA = nums[i];
            int sideB = nums[i-1];
            int sideC = nums[i-2];
            if(!((sideA + sideB <= sideC) || (sideA + sideC <= sideB) || (sideC + sideB <= sideA)))
            {
                return sideA + sideB + sideC;
            }
        }
        return 0;
    }
};