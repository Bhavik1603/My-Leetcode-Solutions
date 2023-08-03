// https://leetcode.com/problems/add-digits

class Solution {
public:
    int addDigits(int num) {
        string s = to_string(num);
        int sum = s[0] - 48;
        while(s.size() != 1)
        {
            sum = 0;
            for(int i = 0; i < s.size(); i++)
            {
                sum += s[i] - 48;
            }
            s = to_string(sum);
        }
        return sum;
    }
};