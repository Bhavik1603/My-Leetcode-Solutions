// https://leetcode.com/problems/number-of-senior-citizens

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i = 0; i < details.size(); i++)
        {
            size_t found = details[i].find("M");
            if(found != string::npos)
            {
                details[i].erase(found+3);
                details[i].erase(0, found + 1);
                if(stoi(details[i]) > 60) count++;
                continue;
            }
            found = details[i].find("F");
            if(found != string::npos)
            {
                details[i].erase(found+3);
                details[i].erase(0, found + 1);
                if(stoi(details[i]) > 60) count++;
                continue;
            }
            found = details[i].find("O");
            if(found != string::npos)
            {
                details[i].erase(found+3);
                details[i].erase(0, found + 1);
                if(stoi(details[i]) > 60) count++;
            }
        }
        return count;
    }
};