// https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        size_t found = sentence.find(searchWord);
        int count=0;
        if(found==0) return 1;
        if (found != string::npos && sentence[found-1]==' ')
        {
            for(int i=0;i<=found;i++)
            {
                if(sentence[i]==' ') count++;
            }
            return count+1;
        }
        count=0;
        found = sentence.find(searchWord, found+1);
        if (found != string::npos && sentence[found-1]==' ')
        {
            for(int i=0;i<=found;i++)
            {
                if(sentence[i]==' ') count++;
            }
            return count+1;
        }
        count=0;
        found = sentence.find(searchWord, found+1);
        if (found != string::npos && sentence[found-1]==' ')
        {
            for(int i=0;i<=found;i++)
            {
                if(sentence[i]==' ') count++;
            }
            return count+1;
        }
        count=0;
        found = sentence.find(searchWord, found+1);
        if (found != string::npos && sentence[found-1]==' ')
        {
            for(int i=0;i<=found;i++)
            {
                if(sentence[i]==' ') count++;
            }
            return count+1;
        }
        count=0;
        found = sentence.find(searchWord, found+1);
        if (found != string::npos && sentence[found-1]==' ')
        {
            for(int i=0;i<=found;i++)
            {
                if(sentence[i]==' ') count++;
            }
            return count+1;
        }
        return -1;
    }
};