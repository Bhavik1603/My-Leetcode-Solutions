// https://leetcode.com/problems/search-in-rotated-sorted-array

class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<int>:: iterator it;
        it=find(nums.begin(),nums.end(),target);
        if(it!=nums.end()) return it-nums.begin();
        else return -1;
        return 0;
    }
};