// https://leetcode.com/problems/move-zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ct = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i]==0)
            {
                ct++;
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        while(ct--)
        {
            nums.push_back(0);
        }
    }
};