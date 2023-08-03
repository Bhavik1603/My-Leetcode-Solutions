// https://leetcode.com/problems/count-odd-numbers-in-an-interval-range

class Solution {
public:
    int countOdds(int low, int high) {
        // 8, 10 2/1
        // 8 9 10, 11, 12 4/2
        if(high%2 == 0 && low%2==0) return (high - low)/2; 
        else return (high - low)/2 + 1;
    }
};