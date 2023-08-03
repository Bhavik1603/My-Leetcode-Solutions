// https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value

#include <algorithm>
class Solution {
public:
    bool digitCount(string num) {
        for(int i = 0; i < num.size(); i++)
        {
            int x = i + 48;
            int gg = count(num.begin(), num.end(), x);
            int kk = num[i] - 48;
            if(gg != kk)
            {
                return false;
            }
        }
        return true;
    }
};