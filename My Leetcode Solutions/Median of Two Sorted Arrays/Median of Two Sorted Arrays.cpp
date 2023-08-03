// https://leetcode.com/problems/median-of-two-sorted-arrays

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> x(nums1);
        x.insert(x.end(), nums2.begin(), nums2.end());
        sort(x.begin(), x.end());
        for(int i = 0; i < x.size(); i++) cout << x[i] << " ";
        if(x.size() % 2 != 0)
        {
            return x[x.size()/2];
        }
        else
        {
            return double((x[x.size()/2] + x[x.size()/2 - 1])) / 2;
        }
        return 0.000;
    }
};