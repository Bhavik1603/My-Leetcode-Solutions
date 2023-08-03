// https://leetcode.com/problems/minimum-time-visiting-all-points

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int moves=0,x,y;
        for(int i=0;i<points.size()-1;i++)
        {
            x=points[i][0]-points[i+1][0];
            y=points[i][1]-points[i+1][1];
            if(x<0) x*=-1;
            if(y<0) y*=-1;
            if(x==1 || x==0) moves+=y;
            else if(y==1 || y==0) moves+=x;
            else
            {
                if(x>y) moves+=x;
                else moves+=y;
            }
        }
        return moves;
    }
};