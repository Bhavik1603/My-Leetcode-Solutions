// https://leetcode.com/problems/sorting-the-sentence

class Solution {
public:
    string sortSentence(string s) {
        vector<string>pos(10,"");
        for(int i=0; i<s.size(); i++){
            int j = i;
            string temp;
            while(!isdigit(s[j])){
                temp.push_back(s[j]);
                j++;
            }
            pos[s[j]-'0'] = temp;
            i = j+1;
        }
        string ans;
        for(int i=1; i<10; i++){
            if(pos[i].length()>0){
                ans+=pos[i];
                ans.push_back(' ');
            }
        }
        ans.pop_back();
        return ans;
    }
};