// https://leetcode.com/problems/valid-perfect-square

class Solution {
public:
    bool isPerfectSquare(int num) {
        int temp = num;
        int i = 1;
        while(temp > 0)
        {
            temp -= i;
            i += 2;
        }
        if(temp == 0) return true;
        return false;
    }
};