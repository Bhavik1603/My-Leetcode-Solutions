// https://leetcode.com/problems/count-items-matching-a-rule

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        if(ruleKey[0]=='t')
        {
            for(int i=0;i<items.size();i++)
            {
                    if(ruleValue.compare(items[i][0])==0) count++;
            }
        }
        if(ruleKey[0]=='c')
        {
            for(int i=0;i<items.size();i++)
            {
                    if(ruleValue.compare(items[i][1])==0) count++;    
            }
        }
        if(ruleKey[0]=='n')
        {
            for(int i=0;i<items.size();i++)
            {
                    if(ruleValue.compare(items[i][2])==0) count++;    
            }
        }
        return count;
    }
};