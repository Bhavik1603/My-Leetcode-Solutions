// https://leetcode.com/problems/maximum-69-number

class Solution {
public:
    int maximum69Number (int num) {
        string g= to_string(num);
        for(int i=0;i<g.size();i++)
        {
            if(g[i]=='6')
            {
                g[i]='9';
                break;
            }
        }
        num=stoi(g);
        return num;
    }
};