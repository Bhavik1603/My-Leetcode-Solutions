// https://leetcode.com/problems/count-pairs-of-similar-strings

class Solution {
public:
    int similarPairs(vector<string>& words) {
        for(int i = 0; i < words.size(); i++)
        {
            sort(words[i].begin(), words[i].end());
            words[i].erase(unique(words[i].begin(), words[i].end()), words[i].end());
        }
        sort(words.begin(), words.end());
        int res = 0;
        for(int i = 0; i < words.size()-1; i++)
        {
            for(int j = i+1; j < words.size(); j++)
            {
                if(words[j].compare(words[i]) == 0)
                {
                    res++;
                    
                }
                else if(words[j].compare(words[i]) > 0) break;
            }
        }
        return res;
    }
};