// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0,words=0;
        for(int i=0;i<sentences.size();i++)
        {
            words=0;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ') words++;
            }
            if(words>max) max=words;
        }
        return max+1;
    }
};