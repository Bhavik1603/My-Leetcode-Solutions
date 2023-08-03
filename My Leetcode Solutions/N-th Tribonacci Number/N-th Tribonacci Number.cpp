// https://leetcode.com/problems/n-th-tribonacci-number

class Solution {
public:
    vector<int> dp{0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    void ini()
    {
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 2;
        dp[4] = 4;
        for(int i = 5; i <= 37; i++)
        {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
    }
    int tribonacci(int n) {
        if(dp[1] != 1) ini();
        return dp[n];
    }
};