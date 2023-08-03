// https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        string sample;
        sample = s;
        sort(sample.begin(),sample.end());
        int x = count(s.begin(),s.end(),s[0]);
        int res=1;
        sample.erase(unique(sample.begin(),sample.end()),sample.end());
        for(int i=1;i<sample.size();i++)
        {
            int y = count(s.begin(),s.end(),sample[i]);
            if(y==x)
            {
                res++;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};