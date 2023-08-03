// https://leetcode.com/problems/count-distinct-numbers-on-board

class Solution {
public:
    int distinctIntegers(int n) {
        if(n==1) return 1;
        return n-2+1;
    }
};