// https://leetcode.com/problems/minimum-operations-to-make-array-equal

class Solution {
public:
    int minOperations(int n) {
        n=pow(n,2);
        return n/4;
    }
};