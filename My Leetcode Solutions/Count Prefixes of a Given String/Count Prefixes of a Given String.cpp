// https://leetcode.com/problems/count-prefixes-of-a-given-string

class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
        for(int i=0;i<words.size();i++)
        {
            size_t found = s.find(words[i]);
            if(found==0)
            {
                count++;
            }
        }
        return count;
    }
};