// https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> res;
        int count,x,y,r;
        for(int j=0;j<queries.size();j++)
        {
            count=0;
            for(int i=0;i<points.size();i++)
            {
                x=points[i][0]-queries[j][0];
                y=points[i][1]-queries[j][1];
                r=queries[j][2];
                if(pow(x,2) + pow(y,2)<=pow(r,2))
                {
                    count++;
                }
            }
            res.push_back(count);
        }
        return res;
    }
};