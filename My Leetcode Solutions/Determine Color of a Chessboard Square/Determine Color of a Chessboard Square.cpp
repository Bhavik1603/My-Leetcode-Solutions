// https://leetcode.com/problems/determine-color-of-a-chessboard-square

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int y=coordinates[0]-97;
        int x=coordinates[1]-48;
        if((x+y)%2==0) return true;
        return false;
    }
};