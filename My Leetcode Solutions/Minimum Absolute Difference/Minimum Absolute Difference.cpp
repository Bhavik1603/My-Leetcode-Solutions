// https://leetcode.com/problems/minimum-absolute-difference

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int mini = INT_MAX;
        for(int i = 0; i < arr.size() - 1; i++)
        {
            if(abs(arr[i] - arr[i+1]) <= mini)
            {
                mini = abs(arr[i] - arr[i+1]);
            }
        }
        vector<vector<int>> res;
        for(int i = 0; i < arr.size() - 1; i++)
        {
            if(abs(arr[i] - arr[i+1]) == mini)
            {
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
                res.push_back(temp);
            }
        }
        return res;
    }
};