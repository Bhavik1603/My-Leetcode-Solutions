// https://leetcode.com/problems/maximum-number-of-coins-you-can-get

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end(), greater<>());
        int n = piles.size() / 3;
        int x = 1;
        int res = 0;
        for(int i = 1; i <= n; i++, x+=2)
        {
            res += piles[x];
        }
        return res;
    }
};