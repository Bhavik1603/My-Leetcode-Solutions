// https://leetcode.com/problems/reshape-the-matrix

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> vec(r,vector<int>(c,0));
        vector<int> res;
        if(r*c != mat.size()*mat[0].size()) return mat;
        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = 0; j < mat[i].size(); j++)
            {
                res.push_back(mat[i][j]);
            }
        }
        int k=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                vec[i][j]=res[k];
                k++;
            }
        }
        return vec;
    }
};