// https://leetcode.com/problems/rotate-string

class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i = 0; i < goal.size(); i++)
        {
            rotate(goal.begin(), goal.begin() + 1, goal.end()); 
            cout << goal << endl;
            if(goal == s) return true;
        }
        return false;
    }
};