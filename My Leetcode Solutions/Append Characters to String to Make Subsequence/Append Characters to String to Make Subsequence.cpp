// https://leetcode.com/problems/append-characters-to-string-to-make-subsequence

class Solution {
public:
    int appendCharacters(string s, string t) {
        int x = 0;
        int flag = 0;
        int count = 0;
        for(int i = 0; i < t.size(); i++)
        {
            flag = 0;
            for(int j = x; j < s.size(); j++)
            {
                if(s[j] == t[i])
                {
                    x = j+1;
                    flag = 1;
                    count++;
                    break;
                }
            }
            if(flag == 0)
            {
                break;
            }
        }
        return t.size() - count;
    }
};

/*
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x = 0;
        int count = 0;
        for(int i = 0; i < s.size(); i++)
        {
            for(int j = x; j < t.size(); j++)
            {
                if(t[j] == s[i])
                {
                    x = j;
                    t[j] = '*';
                    count++;
                    break;
                }
            }
        }
        if(count == s.size()) return true;
        return false;
    }
};
*/