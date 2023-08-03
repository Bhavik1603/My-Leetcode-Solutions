// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

#include<bits/stdc++.h>
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> vec;
        std::vector<int>::iterator it;
        it = std::find(nums.begin(),nums.end(), target);
        if(it == nums.end())
        {
            vec.push_back(-1);
            vec.push_back(-1);
            return vec;
        }
        int ind1= std::find(nums.begin(), nums.end(), target) - nums.begin();
        cout << ind1 << " ";
        vec.push_back(ind1);
        it = std::find(nums.begin()+ind1+1,nums.end(), target);
        if(it == nums.end())
        {
            vec.push_back(ind1);
            return vec;
        }
        std::sort(nums.begin(), nums.end(), greater<int>());
        cout << endl;
        for(int i = 0; i < nums.size(); i++) cout << nums[i] << " ";
        int ind2= std::find(nums.begin(), nums.end(), target) - nums.begin();
        cout << ind2 << " ";
        ind2 = nums.size() - 1 - ind2;
        cout << ind2;
        vec.push_back(ind2);
        return vec;
    }
};