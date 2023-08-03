// https://leetcode.com/problems/product-of-array-except-self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++)
        {
            prod*=nums[i];
            if(nums[i] == 0) break;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0) res.push_back(prod/nums[i]);
            else
            {
                int temp = 1;
                for(int j = 0; j < i; j++)
                {
                    temp *= nums[j];
                    if(nums[j] == 0) break;
                }
                if(temp == 0) res.push_back(temp);
                else
                {
                    for(int j = i+1; j < nums.size(); j++)
                    {
                        temp *= nums[j];
                        if(nums[j] == 0) break;
                    }
                    res.push_back(temp);
                }
            }
        }
        return res;
    }
};