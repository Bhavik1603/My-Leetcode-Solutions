// https://leetcode.com/problems/shuffle-string

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> x;
        string res="";
        for(int i=0;i<indices.size();i++)
        {
            x.insert(pair<int, char>(indices[i],s[i]));
        }
        map<int,char>:: iterator it;
        for(it=x.begin();it!=x.end();it++)
        {
         res+=it->second;   
        }
        return res;
    }
};