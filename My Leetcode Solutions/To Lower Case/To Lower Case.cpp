// https://leetcode.com/problems/to-lower-case

class Solution {
public:
    string toLowerCase(string sl) {
        transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
        return sl;
    }
};