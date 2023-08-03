// https://leetcode.com/problems/keep-multiplying-found-values-by-two

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(1)
        {
            vector<int>:: iterator it;
            it= find(nums.begin(),nums.end(),original);
            if(it!=nums.end())
            {
                original *= 2;
            }
            else
            {
                break;
            }
        }
        return original;
    }
};