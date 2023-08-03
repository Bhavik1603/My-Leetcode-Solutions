// https://leetcode.com/problems/destination-city

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        for(int i=0;i<paths.size();i++)
        {
            int flag=0;
            for(int j=0;j<paths.size();j++)
            {
                if(paths[i][1]==paths[j][0])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                return paths[i][1];
            }
        }
        return "";
    }
};