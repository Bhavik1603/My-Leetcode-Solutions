// https://leetcode.com/problems/count-sorted-vowel-strings

class Solution {
public:
    int countVowelStrings(int n) {
        if(n == 1) return 5;
        vector<int> res(5, 1);
        for(int i = 2; i <= n; i++)
        {
            for(int j = 1; j <= 4; j++)
            {
                res[j] += res[j-1];
            }
        }
        return accumulate(res.begin(), res.end(), 0);
    }
};