// https://leetcode.com/problems/time-needed-to-rearrange-a-binary-string

class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int numberOfOne= count(s.begin(),s.end(),'1');
        int count=0;
        string x="";
        for(int i=0;i<s.size();i++)
        {
            if(i<numberOfOne) x+='1';
            else x+='0';
        }
        while(s.compare(x)!=0)
        {
            for(int i=0;i<s.size()-1;i++)
            {
                if(s[i]=='0' && s[i+1]=='1')
                {
                    s[i]='1';
                    s[i+1]='0';
                    i+=1;
                }
            }
            count++;
        }
        return count;
    }
};