// https://leetcode.com/problems/richest-customer-wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richestCustomer=0,wealth=0;
        for(int i=0;i<accounts.size();i++)
        {
            wealth=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                wealth+=accounts[i][j];
            }
            if(wealth>richestCustomer) richestCustomer=wealth;
        }
        return richestCustomer;
    }
};