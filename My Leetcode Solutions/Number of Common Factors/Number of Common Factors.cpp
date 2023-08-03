// https://leetcode.com/problems/number-of-common-factors

class Solution {
public:
    int commonFactors(int a, int b) {
        int n;
        if(a < b) n = a;
        else n = b;
        int coun = 0;
        for(int i = 1; i <= n; i++)
        {
            if(a%i == b%i && a%i==0) coun++;
        }
        return coun;
    }
};