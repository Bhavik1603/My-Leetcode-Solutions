// https://leetcode.com/problems/a-number-after-a-double-reversal

class Solution {
public:
    bool isSameAfterReversals(int num) {
        string gg = to_string(num);
        string kk = gg;
        int x; 
        cout << gg << endl;
        reverse(gg.begin(), gg.end());
        x = stoi(gg);
        gg = to_string(x);
        reverse(gg.begin(), gg.end());
        cout << gg << endl;
        int rev = stoi(gg);
        cout << rev;
        return num == rev;
    }
};