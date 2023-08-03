// https://leetcode.com/problems/count-operations-to-obtain-zero

class Solution {
public:
    int countOperations(int num1, int num2) {
        int operatio = 0;
        while(1)
        {
            if(num1 == 0 || num2 == 0) break;
            if(num1 >= num2)
            {
                num1 = num1 - num2;
            }
            else
            {
                num2 = num2 - num1;   
            }
            operatio++;
        }
        return operatio;
    }
};