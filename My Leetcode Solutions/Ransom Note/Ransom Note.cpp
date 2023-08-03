// https://leetcode.com/problems/ransom-note

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count=0;
        for(int i=0;i<ransomNote.size();i++)
        {
            for(int j=0;j<magazine.size();j++)
            {
                if(ransomNote[i]==magazine[j])
                {
                    magazine[j]='0';
                    count++;
                    break;
                }
            }
            if(count==ransomNote.size())
            {
                return true;
            }
        }
        return false;
    }
};