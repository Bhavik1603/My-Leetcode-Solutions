// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string x="";
        string y="";
        for(int i = 0; i < word1.size(); i++)
        {
            x+=word1[i];
        }
        for(int i = 0; i < word2.size(); i++)
        {
            y+=word2[i];
        }
        return x == y;
    }
};