// https://leetcode.com/problems/matrix-diagonal-sum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n= mat.size();
        int sum=0;
        for(int i=0, j=n-1; i<n && j>=0; i++,j--)
        {
            sum+= mat[i][i];
            sum+= mat[i][j];
        }
        if(n%2!=0)
        {
            sum-=mat[n/2][n/2];
        }
        return sum;
    }
};