// https://leetcode.com/problems/reverse-prefix-of-word

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index =word.find(ch);
        if(index== std::string::npos)
        {
            return word;
        }
        char t;
        reverse(word.begin(),word.begin()+index+1);
        return word;
    }
};