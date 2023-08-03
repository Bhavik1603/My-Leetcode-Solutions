// https://leetcode.com/problems/find-greatest-common-divisor-of-array

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max= *max_element(nums.begin(),nums.end());
        int min= *min_element(nums.begin(),nums.end());
        return __gcd(max,min);
    }
};