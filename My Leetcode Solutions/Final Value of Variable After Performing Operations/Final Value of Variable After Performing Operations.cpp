// https://leetcode.com/problems/final-value-of-variable-after-performing-operations

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="--X") --x;
            else if(operations[i]=="++X") ++x;
            else if(operations[i]=="X--") x--;
            else if(operations[i]=="X++") x++;
        }
        return x;
    }
};