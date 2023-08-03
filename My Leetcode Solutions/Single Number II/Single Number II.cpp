// https://leetcode.com/problems/single-number-ii

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> temp;
        temp = nums;
        sort(temp.begin(), temp.end());
        temp.erase(unique(temp.begin(), temp.end()), temp.end());
        for(int i = 0; i < temp.size(); i++)
        {
            int ct = count(nums.begin(), nums.end(), temp[i]);
            if(ct == 1) return temp[i];
        }
        return 0;
    }
};