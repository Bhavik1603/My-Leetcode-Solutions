// https://leetcode.com/problems/largest-substring-between-two-equal-characters

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        string temp = s;
        sort(temp.begin(), temp.end());
        int max = -1;
        temp.erase(unique(temp.begin(), temp.end()), temp.end());
        for(int i = 0; i < temp.size(); i++)
        {
            vector<int> vec;
            vec.clear();
            int cc = count(s.begin(),s.end(), temp[i]);
            if(cc == 1) continue;
            for(int j = 0; j < s.size(); j++)
            {
                if(s[j] == temp[i])
                {
                    vec.push_back(j);
                }
            }
            int demo = vec[vec.size()-1] - vec[0] - 1;
            if(demo > max) max = demo;
        }
        return max;
    }
};