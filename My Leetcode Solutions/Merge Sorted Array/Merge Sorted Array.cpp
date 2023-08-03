// https://leetcode.com/problems/merge-sorted-array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v(nums1.begin(),nums1.begin()+m);
        nums1.clear();
        nums1.insert(nums1.begin(),v.begin(),v.end());
        nums1.insert(nums1.end(),nums2.begin(),nums2.begin()+n);
        sort(nums1.begin(),nums1.end());
    }
};