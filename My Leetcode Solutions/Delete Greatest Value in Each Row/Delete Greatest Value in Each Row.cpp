// https://leetcode.com/problems/delete-greatest-value-in-each-row

#include<bits/stdc++.h>
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int answer = 0;
        int m = grid.size();
        int n = grid[0].size();
        while (n > 0) 
        {
            vector<int> maxValues;
            maxValues.clear();
            for (int i = 0; i < m; i++) 
            {
                int maxVal = 0;
                for (int j = 0; j < n; j++) 
                {
                    maxVal = std::max(maxVal, grid[i][j]);
                }
                maxValues.push_back(maxVal);
            }
            int maxIndex = std::max_element(maxValues.begin(), maxValues.end()) - maxValues.begin();        
            answer += maxValues[maxIndex];
            cout << maxValues[maxIndex] << " ";
            
            for (int i = 0; i < m; i++) 
            {
                maxIndex = std::max_element(grid[i].begin(), grid[i].end()) - grid[i].begin();
                grid[i].erase(grid[i].begin() + maxIndex);
            }
        n--;
    }

    return answer;
    }
};