// https://leetcode.com/problems/sign-of-the-product-of-an-array

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int cnt = 0;
        sort(nums.begin(),nums.end());
        int i;
        for(i = 0; i <nums.size() && nums[i] < 0; i++)
        {
            cnt++;
        }
        if(i!=nums.size() && nums[i]==0) return 0;
        return cnt%2==0 ? 1: -1;
    }
};