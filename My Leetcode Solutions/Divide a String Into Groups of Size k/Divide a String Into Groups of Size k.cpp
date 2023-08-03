// https://leetcode.com/problems/divide-a-string-into-groups-of-size-k

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> res;
        for(int i = 0; i < s.size(); i++)
        {
            string str = "";
            for(int j = 0; j < k; j++)
            {
                str += s[i];
                i++;
                if(i==s.size()) break;
            }
            i--;
            if(str.size() == k) res.push_back(str);
            else
            {
                cout << "h" << endl;
                while(str.size()!=k)
                {
                    str += fill;
                }
                res.push_back(str);
            }
        }
        return res;
    }
};