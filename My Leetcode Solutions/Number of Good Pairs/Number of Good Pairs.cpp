// https://leetcode.com/problems/number-of-good-pairs

#include<algorithm>
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size() && nums[j]<=nums[i];j++)
            {
                if(nums[i]==nums[j]) ans++;
            }
        }
        return ans;
    }
};