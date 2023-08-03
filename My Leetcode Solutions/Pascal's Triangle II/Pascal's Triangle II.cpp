// https://leetcode.com/problems/pascals-triangle-ii

class Solution {
public:
    vector<vector<int>> dp;
    void ini()
    {
        if(dp.size() == 0)
        {
            for(int i = 0; i <= 33; i++)
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
    vector<int> getRow(int rowIndex) {
        ini();
        return dp[rowIndex];
    }
};