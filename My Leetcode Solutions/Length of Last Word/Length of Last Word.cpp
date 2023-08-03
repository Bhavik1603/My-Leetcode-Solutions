// https://leetcode.com/problems/length-of-last-word

class Solution {
public:
    int lengthOfLastWord(string s) {
        int size=0;
        int i=s.size()-1;
        while(s[i]==' ') i--;
        while(s[i]!=' ' && i>=0)
        {
            size++;
            if(i==0)
            {
                break;
            }
            i--;
        }
        return size;
    }
};