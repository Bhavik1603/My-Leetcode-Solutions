// https://leetcode.com/problems/find-a-peak-element-ii

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector<int> res;
        for(int i  = 0; i < mat.size(); i++)
        {
            int maxi = *max_element(mat[i].begin(), mat[i].end());
            int index = find(mat[i].begin(), mat[i].end(), maxi) - mat[i].begin();
            if(i == 0 && i == mat.size() - 1)
            {
                res.push_back(i);
                res.push_back(index);
                return res;
            }
            else if(i == 0)
            {
                if(mat[i][index] > mat[i + 1][index])
                {
                    res.push_back(i);
                    res.push_back(index);
                    return res;
                }
            }
            else if(i == mat.size() - 1)
            {
                if(mat[i][index] > mat[i - 1][index])
                {
                    res.push_back(i);
                    res.push_back(index);
                    return res;
                }
            }
            else
            {
                if(mat[i][index] > mat[i - 1][index] && mat[i][index] > mat[i + 1][index])
                {
                    res.push_back(i);
                    res.push_back(index);
                    return res;
                }
            }
        }
        return res;
    }
};