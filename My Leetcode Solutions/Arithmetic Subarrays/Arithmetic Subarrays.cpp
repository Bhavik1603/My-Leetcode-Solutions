// https://leetcode.com/problems/arithmetic-subarrays

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        int lowerBound, upperBound, flag;
        for(int i=0;i<l.size();i++)
        {
            flag=0;
            lowerBound=l[i];
            upperBound=r[i];
            vector<int> v;
            v.clear();
            for(int k=lowerBound;k<=upperBound;k++)
            {
                v.push_back(nums[k]);
            }
            sort(v.begin(),v.end());
            int mid=(v[0]+v[v.size()-1])/2;
            for(int k=1;k<v.size()-1;k++)
            {
                if(v[k]-v[k-1]!=v[k+1]-v[k])
                {
                    ans.push_back(false);
                    flag=1;
                    break;
                }
            }
            if(flag==0) ans.push_back(true);   
        }
        return ans;
    }
};