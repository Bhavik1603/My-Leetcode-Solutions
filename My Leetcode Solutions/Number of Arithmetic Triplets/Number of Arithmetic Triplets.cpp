// https://leetcode.com/problems/number-of-arithmetic-triplets

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count=0, flag=0;
        for(int i=0;i<nums.size()-2;i++)
        {
            for(int j=i+1;j<nums.size()-1;j++)
            {
                if(nums[j]-nums[i]==diff)
                {
                    for(int k=j+1;k<nums.size();k++)
                    {
                        if((nums[k]-nums[j]==diff) && (nums[j]-nums[i]==diff))
                        {
                            count++;
                        }
                        if(nums[k]-nums[j]>diff)
                        {
                            flag=1;
                            break;
                        }
                    }    
                }
            }
        }
        return count;
    }
};