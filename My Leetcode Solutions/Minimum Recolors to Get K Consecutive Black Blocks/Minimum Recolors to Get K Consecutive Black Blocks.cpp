// https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int min=k;
        int countForWhite=0;
        for(int i=0;i<=n-k;i++)
        {
            countForWhite=0;
            for(int j=i;j<i+k;j++)
            {
                if(blocks[j]=='W')
                {
                    countForWhite++;
                }
            }
            if(countForWhite<min)
            {
                min=countForWhite;
            }
        }        
        return min;
    }
};