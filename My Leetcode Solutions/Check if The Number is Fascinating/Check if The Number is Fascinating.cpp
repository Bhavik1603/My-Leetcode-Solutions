// https://leetcode.com/problems/check-if-the-number-is-fascinating

class Solution {
public:
    bool isFascinating(int n) {
        string concatenated = std::to_string(n) + std::to_string(2 * n) + std::to_string(3 * n);
        if (concatenated.length() != 9) 
        {
            return false; // The resulting number doesn't have exactly 9 digits
        }

    std::unordered_set<char> digits;
    for (char digit : concatenated) {
        if (digit == '0' || digits.count(digit) > 0) {
            return false; // The resulting number contains a 0 or a repeated digit
        }
        digits.insert(digit);
    }

    return true; // All conditions are satisfied
    }
};