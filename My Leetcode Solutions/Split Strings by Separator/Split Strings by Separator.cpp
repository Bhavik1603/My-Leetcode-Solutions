// https://leetcode.com/problems/split-strings-by-separator

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> res;
        for(int i = 0; i < words.size(); i++)
        {
            string str = "";
            for(int j = 0; j < words[i].size(); j++)
            {
                if(j == words[i].size() - 1 && words[i][j] != separator)
                {
                    str += words[i][j];
                    if(str.size()!= 0) res.push_back(str);
                    str = "";
                    break;
                }
                if(words[i][j] == separator)
                {
                    if(str.size()!=0) res.push_back(str);
                    str = "";
                }
                else
                {
                    str += words[i][j];
                }
            }
        }
        return res;
    }
};