// https://leetcode.com/problems/projection-area-of-3d-shapes

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int area = pow(n,2);
        int sum=0, nax=0;
        for(int i=0;i<n;i++)
        {
            nax = *max_element(grid[i].begin(),grid[i].end());
            area += nax;
        }
        nax=0;
        int countForZero=0;
        for(int i=0;i<n;i++)
        {
            nax=0;
            sum=0;
            for(int j=0;j<n;j++)
            {
                if(grid[j][i]==0) countForZero++;
                sum=grid[j][i];
                if(sum>nax) nax=sum;
            }
            area += nax;
        }
        area -= countForZero;
        return area;
    }
};