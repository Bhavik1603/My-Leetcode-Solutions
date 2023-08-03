// https://leetcode.com/problems/check-if-the-sentence-is-pangram

class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> abc(26,0);
        for(int i=0;i<sentence.size();i++)
        {
            abc[sentence[i]-'a']++;
            
        }
        for(int i=0;i<26;i++)
        {
            if(abc[i]==0) return false;
        }
        return true;
    }
};