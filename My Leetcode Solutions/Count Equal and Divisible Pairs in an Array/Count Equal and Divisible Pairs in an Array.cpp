// https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array

class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    if((i*j)%k==0) count++;
                }
            }
        }
        return count;
    }
};