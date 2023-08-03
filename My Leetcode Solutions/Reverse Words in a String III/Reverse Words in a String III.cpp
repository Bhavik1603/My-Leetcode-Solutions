// https://leetcode.com/problems/reverse-words-in-a-string-iii


class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        string temp = "";
        for(int i = 0; i < s.size(); i++)
        {
            string temp = "";
            while(s[i]!=' ' && s[i]!='\0')
            {
                temp += s[i];
                i++;
            }
            reverse(temp.begin(),temp.end());
            res+=temp;
            if(i!=s.size()) res+=" ";
        }
        return res;
    }
};