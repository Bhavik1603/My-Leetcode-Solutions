// https://leetcode.com/problems/peak-index-in-a-mountain-array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxi = *max_element(arr.begin(), arr.end());
        int index = find(arr.begin(), arr.end(), maxi) - arr.begin();
        return index;
    }
};