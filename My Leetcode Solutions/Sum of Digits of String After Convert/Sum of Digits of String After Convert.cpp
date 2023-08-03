// https://leetcode.com/problems/sum-of-digits-of-string-after-convert

class Solution {
public:
    int getLucky(string s, int k) {
       int sum = 0;
       string g = "";
       for(int i = 0; i < s.size(); i++)
        {
               g += to_string(s[i] - 96);
        }
        cout << g << endl;
        
       while(k--)
       {
           sum = 0;
           for(int i = 0; i < g.size(); i++)
           {
               sum += g[i] - 48;
           }
           g = to_string(sum);
       } 
       return sum;
    }
};