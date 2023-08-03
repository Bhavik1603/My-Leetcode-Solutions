// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int i,j,k,count=0;
        for(i=0;i<haystack.size();i++)
        {
            if(haystack[i]==needle[0])
            {
                count=0;
                k=i;
                for(j=0;j<needle.size() && k<haystack.size();j++)
                {
                    if(haystack[k]==needle[j]) count++;
                    if(haystack[k]!=needle[j]) break;
                    k++;
                }
                if(count==needle.size()) return i;
            }
        }
        return -1;
    }
};