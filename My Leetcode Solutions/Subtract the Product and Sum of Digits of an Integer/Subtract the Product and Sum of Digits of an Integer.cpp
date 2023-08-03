// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        int count=0;
        int x=n;
        while(x>0)
        {
            count++;
            x=x/10;
        }
        x=n;
        int p=1,sum=0;
        for(int i=0;i<count;i++)
        {
            p*=(x%10);
            sum+=(x%10);
            x=x/10;
        }
        return p-sum;
    }
};