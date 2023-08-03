// https://leetcode.com/problems/truncate-sentence

class Solution {
public:
    string truncateSentence(string s, int k) {
        string gg="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                k--;
            }
            if(k==0) break;
            gg+=s[i];
        }
        return gg;
    }
};