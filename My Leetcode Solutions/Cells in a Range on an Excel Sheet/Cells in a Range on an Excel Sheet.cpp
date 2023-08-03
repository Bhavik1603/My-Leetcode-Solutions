// https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet

class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> res;
        string gg="";
        char c=s[0],d;
        int i;
        for(i=1;s[i]!=':';i++)
        {
            gg+=s[i];
        }
        d=s[i+1];
        int num,num2;
        num= stoi(gg);
        i++;
        i++;
        gg="";
        for(;i<s.size();i++)
        {
            gg+=s[i];
        }
        num2=stoi(gg);
        gg="";
        for(char m=c;m<=d;m++)
        {
            gg="";
            for(i=num;i<=num2;i++)
            {
                gg="";
                gg+=m;
                gg+=to_string(i);
                res.push_back(gg);
            }
        }
        return res;
    }
};