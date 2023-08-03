// https://leetcode.com/problems/top-k-frequent-elements

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> x;
        x=nums;
        sort(x.begin(),x.end());
        x.erase(unique(x.begin(),x.end()),x.end());
        multimap<int, int,greater<int>> mp;
        for(int i=0;i<x.size();i++)
        {
            int a = count(nums.begin(),nums.end(),x[i]);
            mp.insert({a,x[i]});
        }
        x.clear();
        multimap<int,int>::iterator it;
        int i=0;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(i<k)
            {
                x.push_back(it->second);
            }
            if(i==k) break;
            i++;
            
        }
        return x;
    }
};