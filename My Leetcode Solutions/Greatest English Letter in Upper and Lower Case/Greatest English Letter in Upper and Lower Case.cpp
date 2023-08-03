// https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case

class Solution {
public:
    string greatestLetter(string s) {
        sort(s.begin(),s.end());
        string ans="";
        int i=0, j= s.size()-1;
        while(s[i]<='Z' && i<s.size()) i++;
        if(i==s.size()) return ans;
        i--;
        
        while(i>=0)
        {
            size_t x=s.find(s[i]+32);
            if(x!= string::npos)
            {
                ans+=s[i];
                return ans;
            }
            i--;
        }
        return ans;
    }
};