// https://leetcode.com/problems/sort-the-people

#include <map>
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<int> temp;
        temp = heights;
        sort(temp.begin(),temp.end(), greater<>());
        vector<string> na;
        int n = heights.size();
        for(int i = 0; i < names.size(); i++)
        {
            std::vector<int>::iterator it;
            it = std::find(heights.begin(), heights.end(), temp[i]);
            int index = it - heights.begin();
            na.push_back(names[index]);
        }
        
        return na;
    }
};