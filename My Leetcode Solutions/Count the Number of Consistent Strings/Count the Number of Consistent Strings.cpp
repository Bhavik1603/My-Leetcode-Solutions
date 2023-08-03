// https://leetcode.com/problems/count-the-number-of-consistent-strings

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = words.size();
        for(int i=0; i < words.size(); i++)
        {
            for(int j = 0; j < words[i].size(); j++)
            {
                if(allowed.find(words[i][j]) == string::npos)
                {
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};