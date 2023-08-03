// https://leetcode.com/problems/counting-bits

#include <bits/stdc++.h>
class Solution {
public:
    std::string toBinary(int n)
    {
        std::string r;
        while(n!=0) 
        {
            r=(n%2==0 ?"0":"1")+r; 
            n/=2;
        }
        return r;
    }
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i = 0; i <= n; i++)
        {
            string str = toBinary(i);
            char c = '1';
            int cc = count(str.begin(),str.end(), c);
            res.push_back(cc);
        }
        return res;
    }
};