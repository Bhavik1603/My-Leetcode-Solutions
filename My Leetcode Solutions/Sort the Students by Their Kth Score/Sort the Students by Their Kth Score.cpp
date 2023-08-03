// https://leetcode.com/problems/sort-the-students-by-their-kth-score

class Solution {
public:
    
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        for(int i = 0; i < score.size(); i++)
        {
            int temp = score[i][k];
            score[i][k] = score[i][0];
            score[i][0] = temp;
        }
        sort(score.begin(), score.end(), greater <>());
        for(int i = 0; i < score.size(); i++)
        {
            int temp = score[i][k];
            score[i][k] = score[i][0];
            score[i][0] = temp;
        }
        return score;
    }
};