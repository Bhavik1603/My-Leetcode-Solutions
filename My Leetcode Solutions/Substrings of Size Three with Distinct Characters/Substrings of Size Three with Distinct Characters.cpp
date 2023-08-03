// https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters

class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0;
        if(s.size()<3) return count;
        for(int i=0;i<=s.size()-3;i++)
        {
            string gg="";
            gg+=s[i];
            gg+=s[i+1];
            gg+=s[i+2];
            sort(gg.begin(),gg.end());
            gg.erase(unique(gg.begin(),gg.end()),gg.end());
            if(gg.size()==3) count++;
        }
        return count;
    }
};