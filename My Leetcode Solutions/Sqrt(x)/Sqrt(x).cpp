// https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int x) {
        int temp = x;
        int i = 1;
        int num = 0;
        while(temp > 0)
        {
            temp -= i;
            i += 2;
            num++;
        }
        if(temp == 0) return num;
        return num - 1 ;
    }
};