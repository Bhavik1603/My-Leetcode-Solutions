// https://leetcode.com/problems/determine-if-string-halves-are-alike

class Solution {
public:
    bool halvesAreAlike(string s) {
        int countA=0,countB=0;
        for(int i=0;i<s.size();i++)
        {
            if(i<s.size()/2)
            {
                if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                {
                    countA++;
                }
            }
            else
            {
                if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                {
                    countB++;
                }
            }
        }
        if(countA==countB)
        {
            return true;
        }
        return false;
    }
};