// https://leetcode.com/problems/sum-of-unique-elements

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> temp = nums;
        temp.erase(unique(temp.begin(), temp.end()), temp.end());
        int sum = 0;
        for(int i = 0; i < temp.size(); i++)
        {
            if(count(nums.begin(), nums.end(),temp[i])==1)
            {
                sum+=temp[i];
            }
        }
            
        return sum;
    }
};