// https://leetcode.com/problems/find-maximum-number-of-string-pairs

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int res = 0;
        for(int i = 0; i < words.size()-1; i++)
        {
            if(words[i] != "0")
            {
            for(int j = i+1; j < words.size(); j++)
            {
                reverse( words[j].begin(), words[j].end());
                if(words[j] == words[i] && words[i] != "0")
                {
                    words[j] = "0";
                    words[i] = "0";
                    res++;
                }
                reverse( words[j].begin(), words[j].end());
                
            }
            }
        }
        return res;
    }
};