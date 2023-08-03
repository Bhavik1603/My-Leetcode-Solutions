// https://leetcode.com/problems/string-matching-in-an-array

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
       for(int i=0;i<words.size();++i)
       {
           for(int j=0;j<words.size();++j)
           {
               if(i!=j && (words[i].find(words[j]) != string::npos)) 
               {
                   ans.push_back(words[j]);
               }
           }
       } 
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};