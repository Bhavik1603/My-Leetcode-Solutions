// https://leetcode.com/problems/binary-number-with-alternating-bits

class Solution {
public:
    string toBinary(int n)
    {
        string r="";
        while(n!=0)
        {
            r=(n%2==0 ?"0":"1")+r;
            n/=2;
        }
        return r;
    }
    bool hasAlternatingBits(int n) {
        string str = toBinary(n);
        int size1 = str.size();
        str.erase(unique(str.begin(), str.end()),str.end());
        return size1==str.size();
    }
};