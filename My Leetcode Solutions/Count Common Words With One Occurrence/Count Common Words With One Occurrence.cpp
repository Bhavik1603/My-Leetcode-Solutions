// https://leetcode.com/problems/count-common-words-with-one-occurrence

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_set<string> intSet;
        unordered_set<string> duplicate;
        int c = 0;
        for (int i = 0; i < words1.size(); i++) {
            // if element is not there then insert that
            if (intSet.find(words1[i]) == intSet.end()) intSet.insert(words1[i]);
            else duplicate.insert(words1[i]);
        }
        unordered_set<string> intSet2;
        unordered_set<string> duplicate2;
        for (int i = 0; i < words2.size(); i++) {
            // if element is not there then insert that
            if (intSet2.find(words2[i]) == intSet2.end()) intSet2.insert(words2[i]);
            else duplicate2.insert(words2[i]);
        }
        for(int i = 0; i < words1.size(); i++)
        {
            if(duplicate.find(words1[i]) == duplicate.end() && duplicate2.find(words1[i]) == duplicate2.end() && find(words2.begin(),words2.end(),words1[i]) != words2.end()) c++;
        }
        return c;
    }
};