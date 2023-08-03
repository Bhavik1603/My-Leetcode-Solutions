// https://leetcode.com/problems/alternating-digit-sum

class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);
        int sum = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(i % 2 == 0)
            {
                sum += s[i] -48;
            }
            else
            {
                sum -= s[i] - 48;
            }
        }
        return sum;
    }
};