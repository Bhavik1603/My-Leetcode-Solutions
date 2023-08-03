// https://leetcode.com/problems/reverse-integer

class Solution {
public:
    int reverse(int x) {
        string res = to_string(x);
        if(x > 2147483647 ||  x < -2147483648) return 0;
        if(res.size() >= 10 && res[res.size()-1]>50)
        {
            return 0;
        }
        if(res[0]=='-')
        {
            std::reverse(res.begin()+1,res.end());
        }
        else
        {
            std::reverse(res.begin(),res.end());
        }
        string max = "2147483647";
        if(res[0] != '-' && res.size()>=10)
        {
            if(res.compare(max) > 0) res ="0";
        }
        string min = "-2147483648";
        if(res[0] == '-' && res.size()>10)
        {
            if(res.compare(min) > 0) res ="0";
        }
        int j = stoi(res);
        if(j > 2147483647 ||  j < -2147483648) return 0;
        return j;
    }
};