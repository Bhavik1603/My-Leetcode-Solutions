// https://leetcode.com/problems/count-asterisks

class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        int flag = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '|' && flag == 0)
            {
                flag = 1;
            }
            else if(s[i] == '|' && flag == 1)
            {
                flag = 0;
            }
            if(flag == 0 && s[i] == '*')
            {
                count++;
            }
            
        }
        return count;
    }
};