// https://leetcode.com/problems/power-of-four



bool isPowerOfFour(int n){
int x=n/4, i=0, count=0;
    while(i<=x)
    {
        if(n == pow(4,i))
        {
            count++;
            break;
        }
        if(pow(4,i)>n)
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