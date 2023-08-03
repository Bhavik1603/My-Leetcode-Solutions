// https://leetcode.com/problems/contains-duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int> res =nums;
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(),res.end()),res.end());
        if(res.size()==nums.size()) return false;
        return true;
    }
};