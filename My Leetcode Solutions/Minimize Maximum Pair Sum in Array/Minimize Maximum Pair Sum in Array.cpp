// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int> res;
        int sum;
        sort(nums.begin(),nums.end());
        for(int i=0,j=nums.size()-1;i<j;i++,j--)
        {
            sum = nums[i]+ nums[j];
            res.push_back(sum);
        }
        return *max_element(res.begin(),res.end());
    }
};