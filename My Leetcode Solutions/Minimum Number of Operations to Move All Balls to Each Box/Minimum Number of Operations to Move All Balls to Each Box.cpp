// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> x,y;
        int sum;
        for(int i=0;i<boxes.size();i++)
        {
            if(boxes[i]=='1')
            {
                x.push_back(i);
            }
        }
        for(int i=0;i<boxes.size();i++)
        {
            sum=0;
            for(int j=0;j<x.size();j++)
            {
                if(x[j]!=i)
                {
                    sum+=abs(x[j]-i);
                }
            }
            y.push_back(sum);
        }
        return y;
    }
};