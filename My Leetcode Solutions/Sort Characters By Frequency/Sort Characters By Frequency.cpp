// https://leetcode.com/problems/sort-characters-by-frequency

class Solution {
public:
    string frequencySort(string s) {
        sort(s.begin(), s.end());
        multimap<int, char, greater<int>> mmp;
        string temp = "";
        temp = s;
        temp.erase(unique(temp.begin(), temp.end()), temp.end());
        for(int i = 0; i < temp.size(); i++)
        {
            int ct = count(s.begin(), s.end(), temp[i]);
            mmp.insert(make_pair(ct, temp[i]));
        }
        temp = "";
        for(auto it = mmp.begin(); it!=mmp.end(); it++)
        {
            //cout << it->first << "->" << it->second <<", ";
            for(int i = 0; i < it->first; i++)
            {
                temp += it->second;
            }
        }
        return temp;
    }
};