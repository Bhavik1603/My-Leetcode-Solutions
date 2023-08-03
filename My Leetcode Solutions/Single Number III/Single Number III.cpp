// https://leetcode.com/problems/single-number-iii

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> temp;
        temp = nums;
        sort(temp.begin(), temp.end());
        temp.erase(unique(temp.begin(), temp.end()), temp.end());
        vector<int> vec;
        for(int i = 0; i < temp.size(); i++)
        {
            int ct = count(nums.begin(), nums.end(), temp[i]);
            if(ct == 1)
                vec.push_back(temp[i]);
            if(vec.size() == 2) return vec;
        }
        return vec;
    }
};