// https://leetcode.com/problems/find-the-duplicate-number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> res;
        res=nums;
        sort(res.begin(),res.end());
        for(int i=0;i<res.size()-1;i++)
        {
            if(res[i]==res[i+1])
            {
                return res[i];
            }
        }
        return -1;
    }
};