// https://leetcode.com/problems/count-the-digits-that-divide-a-number

class Solution {
public:
    int countDigits(int num) {
        int temp = num;
        int coun = 0;
        while(temp>0)
        {
            int fac = temp%10;
            if(num%fac==0) coun++;
            temp /=10;
        }
        return coun;
    }
};