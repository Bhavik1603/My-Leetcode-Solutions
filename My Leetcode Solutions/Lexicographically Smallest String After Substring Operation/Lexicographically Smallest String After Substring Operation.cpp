// https://leetcode.com/problems/lexicographically-smallest-string-after-substring-operation

class Solution {
public:
    string smallestString(string s) {
         int n = s.length();

    // Find the first non-'a' character in the string
    int i = 0;
    while (i < n && s[i] == 'a') {
        i++;
    }

    // If the entire string is composed of 'a's, replace the last character with 'z'
    if (i == n) {
        s[n - 1] = 'z';
        return s;
    }

    // Replace all characters after the first non-'a' character with 'a'
    for (int j = i; s[j]!='a' && s[j]!='\0'; j++) {
        s[j] = s[j]-1;
    }

    return s;
    }
};