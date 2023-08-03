// https://leetcode.com/problems/merge-strings-alternately

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i;
        string res = "";
        if(word1.size()>word2.size())
        {
            for(i = 0; i < word1.size(); i++)
            {
                if(i>= word2.size())
                {
                    res += word1[i];
                }
                else
                {
                    res += word1[i];
                    res += word2[i];
                }
            }
        }
        else
        {
            for(i = 0; i < word2.size(); i++)
            {
                if(i>= word1.size())
                {
                    res += word2[i];
                }
                else
                {
                    res += word1[i];
                    res += word2[i];
                }
            }
        }
        return res;
    }
};