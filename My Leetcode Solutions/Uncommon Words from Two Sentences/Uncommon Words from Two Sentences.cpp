// https://leetcode.com/problems/uncommon-words-from-two-sentences

class Solution {
public:
    void split_str( std::string const &str, const char delim,  
        std::vector <std::string> &out )  
        {  
            // create a stream from the string  
            std::stringstream s(str);  
              
            std::string s2;  
            while (std:: getline (s, s2, delim) )  
            {  
                out.push_back(s2); // store the string in s2  
            }  
        }  
    vector<string> uncommonFromSentences(string s1, string s2) {
        s1 += " ";
        s1 += s2;
        const char delim = ' '; 
        vector <string> out;  
        split_str (s1, delim, out); 
        
        
        unordered_set<string> intSet;
        unordered_set<string> duplicate;
        for (int i = 0; i < out.size(); i++) {
            if (intSet.find(out[i]) == intSet.end()) intSet.insert(out[i]);
            else duplicate.insert(out[i]);
        }
        vector<string> res;
        for(int i = 0; i < out.size(); i++)
        {
            if(duplicate.find(out[i]) == duplicate.end())
            {
                res.push_back(out[i]);
            }
        }
        return res;
    }
};