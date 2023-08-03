// https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
public:
    int firstUniqChar(string s) {
        if(s.size()==1) return 0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==s[i] && i!=j)
                {
                    break;
                }
                if((s[j]!=s[i] && j==s.size()-1)|| (s[j]==s[i] && j==s.size()-1 && i==j))
                {
                    return i;
                }
            }
        }
        return -1;
    }
};