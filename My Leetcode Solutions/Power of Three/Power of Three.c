// https://leetcode.com/problems/power-of-three



bool isPowerOfThree(int n){
int i=0, count=0, x =n/3;
    while(i<=x)
    {
        if(n == pow(3,i))
        {
            count++;
            break;
        }
        if(pow(3,i)> n)
        {
            break;
        }
        i++;
    }
    if(count==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}