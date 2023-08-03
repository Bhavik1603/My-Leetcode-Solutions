// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sumOfElements = accumulate(nums.begin(), nums.end(), 0);
        vector<int> numbers;
        for(int i = 0; i < nums.size(); i++)
        {
            while(nums[i] > 0)
            {
                numbers.push_back(nums[i] % 10);
                nums[i] /= 10;
            }
        }
        int sumOfDigits = accumulate(numbers.begin(), numbers.end(), 0);
        return abs(sumOfElements - sumOfDigits);
    }
};