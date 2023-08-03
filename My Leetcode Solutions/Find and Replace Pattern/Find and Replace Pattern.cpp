// https://leetcode.com/problems/find-and-replace-pattern

#include <bits/stdc++.h>
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        map<char, char> mp;
        vector<string> res;
        set<char> valset;
        for(int i = 0; i < words.size(); i++)
        {
            for(int j = 0; j < pattern.size(); j++)
            {
                if (valset.find(words[i][j]) != valset.end())
                {
                        
                }
                else
                {
                    mp.insert(pair<char, char>(pattern[j], words[i][j]));
                    valset.insert(words[i][j]);
                }
            }
            string str = "";
            for(int j = 0; j < pattern.size(); j++)
            {
                str += mp[pattern[j]];
            }
            cout << str <<endl;
            if(str == words[i]) res.push_back(words[i]);
            mp.clear();
            valset.clear();
        }
        return res;
    }
};