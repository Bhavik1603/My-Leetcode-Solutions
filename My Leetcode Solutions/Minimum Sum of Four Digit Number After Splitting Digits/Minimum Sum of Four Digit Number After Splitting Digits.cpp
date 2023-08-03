// https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits

class Solution {
public:
    int minimumSum(int num) {
        vector<int> n;
        n.push_back(num%10);
        num=num/10;
        n.push_back(num%10);
        num=num/10;
        n.push_back(num%10);
        n.push_back(num/10);
        sort(n.begin(), n.end());
        string num1="";
        num1+=to_string(n[0]);
        num1+=to_string(n[2]);
        string num2="";
        num2+=to_string(n[1]);
        num2+=to_string(n[3]);
        int ans = stoi(num1)+stoi(num2);
        return ans;
    }
};