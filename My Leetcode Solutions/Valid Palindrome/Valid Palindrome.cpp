// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove(s.begin(), s.end(), ' '), s.end()); 
        string gg="";
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<97 || s[i]>122)
            {
                if(s[i]<48 || s[i]>57) gg+=s[i];   
            }
        }
        for(int i=0;i<gg.size();i++)
        {
            s.erase(remove(s.begin(), s.end(), gg[i]), s.end()); 
        }
        gg= s;
        reverse(s.begin(),s.end());
        if(gg.compare(s)==0)
        {
            return true;
        }
        return false;
    }
};