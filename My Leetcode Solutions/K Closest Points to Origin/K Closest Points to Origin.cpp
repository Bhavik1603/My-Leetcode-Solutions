// https://leetcode.com/problems/k-closest-points-to-origin

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        multimap<int,vector<int>> res;
        for(int i=0;i<points.size();i++)
        {
            int x = pow(points[i][0],2) + pow(points[i][1],2);
            res.insert(pair<int,vector<int>>(x,points[i]));
        }
        vector<vector<int>> ans;
        multimap<int,vector<int>>:: iterator it;
        for(it=res.begin();it!=res.end();it++)
        {
            ans.push_back(it->second);
            k--;
            if(k==0)
            {
                break;
            }
        }

        return ans;
    }
};