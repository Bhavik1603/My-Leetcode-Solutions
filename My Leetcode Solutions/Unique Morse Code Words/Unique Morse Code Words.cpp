// https://leetcode.com/problems/unique-morse-code-words

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<char,string> morse_code;
        morse_code.insert({'a',".-"});
        morse_code.insert({'b',"-..."});
        morse_code.insert({'c',"-.-."});
        morse_code.insert({'d',"-.."});
        morse_code.insert({'e',"."});
        morse_code.insert({'f',"..-."});
        morse_code.insert({'g',"--."});
        morse_code.insert({'h',"...."});
        morse_code.insert({'i',".."});
        morse_code.insert({'j',".---"});
        morse_code.insert({'k',"-.-"});
        morse_code.insert({'l',".-.."});
        morse_code.insert({'m',"--"});
        morse_code.insert({'n',"-."});
        morse_code.insert({'o',"---"});
        morse_code.insert({'p',".--."});
        morse_code.insert({'q',"--.-"});
        morse_code.insert({'r',".-."});
        morse_code.insert({'s',"..."});
        morse_code.insert({'t',"-"});
        morse_code.insert({'u',"..-"});
        morse_code.insert({'v',"...-"});
        morse_code.insert({'w',".--"});
        morse_code.insert({'x',"-..-"});
        morse_code.insert({'y',"-.--"});
        morse_code.insert({'z',"--.."});
        vector<string> xxx;
        for(int i=0;i<words.size();i++)
        {
            string gg="";
            for(int j=0;j<words[i].size();j++)
            {
                auto itr=morse_code.find(words[i][j]);
                gg+=itr->second;
            }
            xxx.push_back(gg);
        }
        sort(xxx.begin(),xxx.end());
        xxx.erase(unique(xxx.begin(),xxx.end()),xxx.end());
        return xxx.size();
    }
};