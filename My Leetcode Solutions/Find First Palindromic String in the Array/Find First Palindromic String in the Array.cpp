// https://leetcode.com/problems/find-first-palindromic-string-in-the-array

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            string a=words[i];
            string b=words[i];
            reverse(b.begin(),b.end());
            if(a.compare(b)==0) return a;
        }
        return "";
    }
};