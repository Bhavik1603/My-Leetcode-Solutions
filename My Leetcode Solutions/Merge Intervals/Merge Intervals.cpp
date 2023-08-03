// https://leetcode.com/problems/merge-intervals

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        vector<int> temp;
        sort(intervals.begin(),intervals.end()); // [[1,4],[0,4]]
        for(int i = 0; i < intervals.size(); i++)
        {
            temp.push_back(intervals[i][0]);
            temp.push_back(intervals[i][1]);
        }
        for(int i = 0; i < temp.size()-1; i++)
        {
            //if(temp[i] >= temp[i+1] && temp[]) // [[1,4],[0,0]]
            if(temp[i] >= temp[i+1] && temp[i]>=temp[i+2] && i%2!=0) // [[1,4],[2,3]]
            {
                temp.erase(temp.begin()+i+1);
                temp.erase(temp.begin()+i+1);
                i-=1; // [[2,3],[4,5],[6,7],[8,9],[1,10]]
            }
            else if(temp[i] >= temp[i+1] && i%2!=0)
            {
                temp.erase(temp.begin()+i);
                temp.erase(temp.begin()+i);
                i-=1; //[[1,4],[0,2],[3,5]] output: [[0,4],[3,5]] expected : [[0,5]]
            }
        }
        for(int i = 0; i < temp.size()-1; i+=2)
        {
            vector<int> tt;
            tt.push_back(temp[i]);
            tt.push_back(temp[i+1]);
            res.push_back(tt);
            tt.clear();
        }
            
        return res;
        /*
        vector<vector<int>> res;
        int j=0;
        sort(intervals.begin(), intervals.end());
        
        for(int i = 1; i < intervals.size(); i++)
        {
            vector<int> temp;
            if(intervals[i-1][1] >= intervals[i][0])
            {
                temp.push_back(intervals[i-1][0]);
                temp.push_back(intervals[i][1]);
                res.push_back(temp);
            }
            else
            {
                temp.push_back(intervals[i][0]);
                temp.push_back(intervals[i][1]);
                res.push_back(temp);
            }
            temp.clear();
        }
        return res;
        */
    }
};