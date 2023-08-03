// https://leetcode.com/problems/available-captures-for-rook

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int coordinate1, coordinate2;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(board[i][j]=='R')
                {
                    coordinate1=i;
                    coordinate2=j;
                    break;
                }
            }
        }
        int count=0;
        for(int i=coordinate1;i>=0;i--)
        {
            if(board[i][coordinate2]=='B') break;
            if(board[i][coordinate2]=='p')
            {
                count++;
                break;
            }
        }
        for(int i=coordinate1;i<8;i++)
        {
            if(board[i][coordinate2]=='B') break;
            if(board[i][coordinate2]=='p')
            {
                count++;
                break;
            }
        }
        for(int i=coordinate2;i<8;i++)
        {
            if(board[coordinate1][i]=='B') break;
            if(board[coordinate1][i]=='p')
            {
                count++;
                break;
            }
        }
        for(int i=coordinate2;i>=0;i--)
        {
            if(board[coordinate1][i]=='B') break;
            if(board[coordinate1][i]=='p')
            {
                count++;
                break;
            }
        }
        return count;
    }
};