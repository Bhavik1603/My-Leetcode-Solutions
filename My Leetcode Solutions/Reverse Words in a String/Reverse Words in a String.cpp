// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec;
        string str = "";
        int i = 0;
        while(s[i]!='\0')
        {
            if(s[i]==' ')
            {
                if(str!="") vec.push_back(str);
                str = "";
            }
            else str += s[i];
            i++;
        }
        vec.push_back(str);
        str = "";
        for(int i = vec.size()-1; i >= 0; i--)
        {
            str += vec[i];
            if(i!=0 && vec[i]!="") str+=" ";
        }
        return str;
    }
};