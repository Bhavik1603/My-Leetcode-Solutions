// https://leetcode.com/problems/number-of-1-bits

class Solution {
public:
    std::string toBinary(long long n)
{
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}
    int hammingWeight(uint32_t n) {
        string str = to_string(n);
        long long deci = stol(str);
        str = toBinary(deci);
        deci = count(str.begin(),str.end(),'1');
        return deci;
    }
};