// https://leetcode.com/problems/sort-vowels-in-a-string

class Solution {
public:
    bool isVowel(char c)
    {
        if(c == 'a' || c == 'e' || c =='i' || c=='o' || c=='u' || c == 'A' || c == 'E' || c =='I' || c=='O' || c=='U') return true;
        return false;
    }
    string sortVowels(string s) {
        string vowel = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(isVowel(s[i])) vowel += s[i];
        }
        sort(vowel.begin(), vowel.end());
        for(int i = 0, j = 0; i < s.size(); i++)
        {
            if(isVowel(s[i]))
            {
                s[i] = vowel[j];
                j++;
            }
        }
        return s;
    }
};