// https://leetcode.com/problems/set-matrix-zeroes

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>vectorFori;
        vector<int>vectorForj;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(matrix[i][j]==0){
                   vectorFori.push_back(i);
                   vectorForj.push_back(j);
                }
            }
        }
        sort(vectorFori.begin(), vectorFori.end());
        sort(vectorForj.begin(), vectorForj.end());
        vectorFori.erase(unique(vectorFori.begin(), vectorFori.end()), vectorFori.end());
        vectorForj.erase(unique(vectorForj.begin(), vectorForj.end()), vectorForj.end());
        for(int k = 0; k < vectorFori.size(); k++)
        {
            for(int i = 0; i < n; i++)
            {
                matrix[vectorFori[k]][i] = 0;
            }
        }
        for(int k = 0; k < vectorForj.size(); k++)
        {
            for(int i = 0; i < m; i++)
            {
                matrix[i][vectorForj[k]] = 0;
            }
        }
    }
};