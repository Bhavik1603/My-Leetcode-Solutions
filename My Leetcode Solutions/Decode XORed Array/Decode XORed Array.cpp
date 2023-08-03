// https://leetcode.com/problems/decode-xored-array

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans(encoded.size()+1, 0);
        ans[0] = first;
        for(int i = 0; i < encoded.size(); i++)
        {
            ans[i+1] = ans[i] ^ encoded[i]; 
        }
        return ans;
    }
};