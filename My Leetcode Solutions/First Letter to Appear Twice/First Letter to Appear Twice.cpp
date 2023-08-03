// https://leetcode.com/problems/first-letter-to-appear-twice

class Solution {
public:
    char repeatedCharacter(string s) {
        int max=s.size();
        char ans;
        for(int i=0;i<s.size()-1;i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
                if(s[j]==s[i])
                {
                    if(j<max)
                    {
                        ans=s[i];
                        max=j;
                    }
                    break;
                }
            }
        }
        return ans;
    }
};