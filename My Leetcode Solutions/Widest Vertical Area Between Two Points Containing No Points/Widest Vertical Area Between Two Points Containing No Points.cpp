// https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> res;
        int sum=0,max=0;
        for(int i=0;i<points.size();i++)
        {
            res.push_back(points[i][0]);
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size()-1;i++)
        {
            sum=res[i+1]-res[i];
            if(sum>max)max=sum;
        }
        return max;
    }
};