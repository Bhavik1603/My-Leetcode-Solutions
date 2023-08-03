// https://leetcode.com/problems/increasing-decreasing-string

class Solution {
public:
    string sortString(string s) {
        string res = "";
        while(s.size()!=0)
        {
            sort(s.begin(), s.end());
            string temp = "";
            temp = s;
            temp.erase(unique(temp.begin(), temp.end()), temp.end());
            res += temp;
            for(int i = 0; i < temp.size(); i++)
            {
                int x = s.find(temp[i]);
                s.erase(x,1);
            }
            sort(s.begin(), s.end(), greater<>());
            temp = "";
            temp = s;
            temp.erase(unique(temp.begin(), temp.end()), temp.end());
            res += temp;
            for(int i = 0; i < temp.size(); i++)
            {
                int x = s.find(temp[i]);
                s.erase(x,1);
            }
        }
        
        return res;
    }
};