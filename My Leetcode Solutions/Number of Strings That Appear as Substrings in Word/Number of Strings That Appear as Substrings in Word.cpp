// https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word

class Solution {
public:
    bool isSubstring(string s1, string s2)
    {
        int M = s1.length();
        int N = s2.length();
        for (int i = 0; i <= N - M; i++) 
        {
            int j;
            for (j = 0; j < M; j++)
                if (s2[i + j] != s1[j])
                    break;
 
            if (j == M)
                return true;
    }
 
    return false;
}
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(int i=0;i<patterns.size();i++)
        {
            if(isSubstring(patterns[i],word)) count++;
        }
        return count;
    }
};