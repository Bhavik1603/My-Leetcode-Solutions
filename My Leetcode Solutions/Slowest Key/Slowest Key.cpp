// https://leetcode.com/problems/slowest-key

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int longest = releaseTimes[0];
        char res = keysPressed[0];
        for(int i = 1; i < keysPressed.size(); i++)
        {
            int x = releaseTimes[i] - releaseTimes[i-1];
            cout << x << " ";
            if(x >= longest)
            {
                if(x == longest && keysPressed[i] < res)
                {
                    longest = x;    
                }
                else
                {
                    longest = x;
                    res = keysPressed[i];
                }   
            }
        }
        return res;
    }
};