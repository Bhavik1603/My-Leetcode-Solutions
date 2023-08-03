// https://leetcode.com/problems/power-of-two



bool isPowerOfTwo(int n){
int i=0, count = 0;
    while(i<=n/2)
    {
        if(n == pow(2, i))
        {
            count++;
            break;
        }
        if(pow(2,i)>n)
        {
            break;
        }
        i++;
    }
    if(count == 1)
    {
        return 1;
    }
    else{
        return 0;
    }
}