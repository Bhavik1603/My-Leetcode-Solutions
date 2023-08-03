// https://leetcode.com/problems/fair-candy-swap

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) 
    {
        vector<int> res(2,0);
        int a = accumulate(aliceSizes.begin(),aliceSizes.end(),0);
        int b = accumulate(bobSizes.begin(),bobSizes.end(),0);
        int diff = (a - b) / 2;
        if(a-b == 0) return res;
        unordered_set<int> s(aliceSizes.begin(),aliceSizes.end());
        for(int j=0;j<bobSizes.size();j++)
        {
            if(s.count(bobSizes[j]+diff) )
            {
                res[0]=bobSizes[j]+diff;
                res[1]=bobSizes[j];
                break;
            }
        }
        return res;
    }
};