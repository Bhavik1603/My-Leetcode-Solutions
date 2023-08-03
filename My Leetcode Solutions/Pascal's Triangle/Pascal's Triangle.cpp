// https://leetcode.com/problems/pascals-triangle

class Solution {
public:
    vector<vector<int>> dp;
    void ini()
    {
        if(dp.size() == 0)
        {
            for(int i = 0; i < 30; i++)
            {
                vector<int> temp(i+1, 1);
                dp.push_back(temp);
                for(int j = 1; j < dp[i].size() - 1; j++)
                {
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
                }
            }
        }
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        ini();
        for(int i = 0; i < numRows; i++)
        {
            vector<int> temp;
            temp = dp[i];
            res.push_back(temp);
        }
        return res;
    }
};