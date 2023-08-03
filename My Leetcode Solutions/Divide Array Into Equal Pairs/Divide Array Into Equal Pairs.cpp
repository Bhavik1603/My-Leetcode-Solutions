// https://leetcode.com/problems/divide-array-into-equal-pairs

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0,j=i+1;i<nums.size()-1;i+=2,j+=2)
        {
            if(nums[i]!=nums[j]) return false;
        }
        return true;
    }
};