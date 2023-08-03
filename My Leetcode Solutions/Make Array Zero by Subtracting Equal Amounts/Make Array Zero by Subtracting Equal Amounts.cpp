// https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int steps=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[nums.size()-1]<=0)
            {
                break;
            }
            if(nums[i]<=0){
                
            }
            else
            {
                
                for(int j=0;j<nums.size();j++)
                {
                    nums[j] -= nums[i];
                }
                steps++;   
            }
        }
        //if(st)
        return steps;
    }
};