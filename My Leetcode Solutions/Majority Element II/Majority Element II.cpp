// https://leetcode.com/problems/majority-element-ii

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> aeshna;
        sort(nums.begin(),nums.end());
        aeshna=nums;
        int n=nums.size();
        vector<int> res;
        aeshna.erase(unique(aeshna.begin(),aeshna.end()),aeshna.end());
        for(int i=0;i<aeshna.size();i++)
        {
            int x = count(nums.begin(),nums.end(),aeshna[i]);
            if(x>n/3) res.push_back(aeshna[i]);
        }
        return res;
    }
};