// https://leetcode.com/problems/intersection-of-two-arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        nums1.erase(unique(nums1.begin(),nums1.end()), nums1.end());
        nums2.erase(unique(nums2.begin(),nums2.end()), nums2.end());
        vector<int> res;
        if(nums1.size()<nums2.size())
        {
           for(int i=0;i<nums1.size();i++)
           {
               for(int j=0;j<nums2.size();j++)
               {
                   if(nums1[i]==nums2[j])
                   {
                       res.push_back(nums2[j]);
                       break;
                   }
               }
           }
        }
        else
        {
            for(int i=0;i<nums2.size();i++)
           {
               for(int j=0;j<nums1.size();j++)
               {
                   if(nums1[j]==nums2[i])
                   {
                       res.push_back(nums2[i]);
                       break;
                   }
               }
           }
        }
        return res;
    }
};