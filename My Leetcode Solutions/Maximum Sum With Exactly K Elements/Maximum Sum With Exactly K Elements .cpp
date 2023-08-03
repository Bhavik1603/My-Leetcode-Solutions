// https://leetcode.com/problems/maximum-sum-with-exactly-k-elements

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int x = *max_element(nums.begin(), nums.end());
        int sum = x;
        for(int i = 1; i < k; i++)
        {
            sum +=x;
            sum += i;
        }
        return sum;
    }
};